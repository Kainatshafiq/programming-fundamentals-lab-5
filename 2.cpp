#include<iostream>
using namespace std;
int main(){
    int num,sum;
    cout<<"Enter a natural number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
}