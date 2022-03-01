#include<iostream>
using namespace std;
int main()
{
    static int m=1;
    for(int i = 0; i<5;i++)
    {
        for(int j = 0;j<i+1;j++)
        {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}
//floyd's triangle
