#include <iostream>

int main()
{
    int *pNum = nullptr;
    pNum = new int;
    *pNum=82;
    std::cout<<pNum<<" ====> "<<*pNum<<'\n';
    
    delete pNum;//does frees the space but not replaces it till needed
    int a=41,b,c,d,f,g,h,j,k,l,qw,er,t,y,u,i,o,p,z,x,v,n,m;
    *pNum=82;
    std::cout<<pNum<<'\n';
    return 0;
}