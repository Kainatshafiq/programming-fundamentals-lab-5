#include<iostream>
using namespace std;
int main(){
    int num,cube;
    cout<<"Enter a num"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cube=i*i*i;
        cout<<"cube of"<<i<<"="<<cube<<endl;
    }
}