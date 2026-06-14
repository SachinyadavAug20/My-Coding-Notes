
// https://leetcode.com/problems/lfu-cache/
// to much opps involved so used java
import java.util.HashMap;

class ListNode {
    int val;
    ListNode next;
    ListNode prev;

    ListNode(int x, ListNode a, ListNode b) {
        val = x;
        prev = a;
        next = b;
    }

    ListNode(int x, ListNode a) {
        this(x, a, null);
    }

    ListNode(int x) {
        this(x, null, null);
    }
}

class DLL {
    // this 1<-2<-3...
    ListNode left;
    ListNode right;
    HashMap<Integer, ListNode> hsh;

    DLL() {
        this.left = new ListNode(0);
        this.right = new ListNode(0, this.left);
        this.left.next = this.right;
        hsh = new HashMap<>();
    }

    public int length() {
        return hsh.size();
    }

    public void pushRight(int val) {
        ListNode newNode = new ListNode(val, this.right.prev, this.right);
        hsh.put(val, newNode);
        this.right.prev = newNode;
        newNode.prev.next = newNode;
    }

    public void pop(int val) {
        if (this.hsh.containsKey(val) == true) {
            ListNode node = hsh.get(val);
            ListNode next = node.next;
            ListNode prev = node.prev;
            next.prev = prev;
            prev.next = next;
            this.hsh.remove(val);
        }
    }

    int popLeft() {
        int x = this.left.next.val;
        this.pop(x);
        return x;
    }

    void update(int val) {
        this.pop(val);
        this.pushRight(val);
    }
}

class LFUCache {
    int capacity;
    int lfuCnt;
    HashMap<Integer, Integer> valMap; // key -> value
    HashMap<Integer, Integer> ctnMap; // key -> frequency
    HashMap<Integer, DLL> listMap; // frequency -> DLL of keys

    public LFUCache(int capacity) {
        this.capacity = capacity;
        this.lfuCnt = 0;
        valMap = new HashMap<>();
        ctnMap = new HashMap<>();
        listMap = new HashMap<>();
    }

    public void counter(int key) {
        int cnt = ctnMap.get(key);
        DLL oldList = listMap.get(cnt);
        oldList.pop(key);
        ctnMap.put(key, cnt + 1);
        if (!listMap.containsKey(cnt + 1)) {
            listMap.put(cnt + 1, new DLL());
        }
        listMap.get(cnt + 1).pushRight(key);
        if (cnt == lfuCnt && oldList.length() == 0) {
            lfuCnt++;
        }
    }

    public int get(int key) {
        if (!valMap.containsKey(key)) {
            return -1;
        }
        counter(key);
        return valMap.get(key);
    }

    public void put(int key, int value) {
        if (capacity == 0)
            return;
        if (valMap.containsKey(key)) {
            valMap.put(key, value);
            counter(key);
            return;
        }
        if (valMap.size() == capacity) {
            int rem = listMap.get(lfuCnt).popLeft();
            valMap.remove(rem);
            ctnMap.remove(rem);
        }
        valMap.put(key, value);
        ctnMap.put(key, 1);
        if (!listMap.containsKey(1)) {
            listMap.put(1, new DLL());
        }
        listMap.get(1).pushRight(key);
        lfuCnt = 1;
    }
}
