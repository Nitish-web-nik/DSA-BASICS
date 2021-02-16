#include <iostream>
using namespace std;
int recursion(int n)
{
    if(n!=0)
    {
        return n + recursion(n-1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<recursion(n);
    return 0;
}

