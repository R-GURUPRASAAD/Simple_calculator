#include<iostream>
using namespace std;
int main(){
    double a,b;
    char c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the operator (+,-,*,/) :";
    cin>>c;
    cout<<"Enter the second number : ";
    cin>>b;
    switch(c){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        if(b!=0){
            cout<<a/b;
        }else{
            cout<<"Error:Zero division";
        }
        break;
        default:
        cout<<"Invalid input";
    }
    return 0;
}