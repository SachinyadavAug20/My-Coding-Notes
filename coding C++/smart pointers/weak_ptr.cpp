#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p1(new int(80));
    std::shared_ptr<int> p2(new int(90));
    std::cout << *p1 << " -> " << p1.use_count() << " -> " << *p2 << " -> " << p2.use_count() << '\n';
    p1 = p2;
    std::cout << *p1 << " -> " << p1.use_count() << " -> " << *p2 << " -> " << p2.use_count() << '\n';
    p1.reset();
    std::cout << p2 << " -> " << *p2 << " -> " << p2.use_count() << " -> " << p1.use_count() << "\n\n";

    std::shared_ptr<int> n1(new int(56));
    std::weak_ptr<int> n2 = n1;
    std::cout << *n1 << " -> " << n1.use_count() << *n1 << " -> " << n1.use_count() << '\n';
    std::cout << *(n2.lock()) << " -> " << n2.use_count() << " -> " << *(n2.lock()) << " -> " << n2.use_count() << '\n';
    n1.reset();
    std::cout << *(n2.lock()) << " -> " << n2.use_count() << " -> " << *(n2.lock()) << " -> " << n2.use_count() << '\n';
    return 0;
}