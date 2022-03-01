/*
1
3
5
7
9
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=0;k<4-i;k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}

