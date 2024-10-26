#include<iostream>
using namespace std;
int main(){
    int num,marks;
    int sum=0;
    cout<<"enter a num of subject"<<endl;
    cin>>num;
    for(int i=1;i<num;i++){
        cout<<"enter a num"<<endl;
        cin>>marks;
        sum=sum+marks;
    }
    float average=sum/num;
    cout<<"average:"<<average<<endl;
    if(average>=90 && average<=100){
        cout<<"grade A"<<endl;
    }
    else if(average>=80 && average<=90){
        cout<<"grade B"<<endl;
    }
    else if(average>=70 && average<=80){
        cout<<"grade C"<<endl;
    }
    else if(average>=60 && average<=70){
        cout<<"grade D"<<endl;
    }
    else {
        cout<<"gradeF";
    }
}