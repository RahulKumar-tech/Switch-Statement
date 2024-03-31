//Q) WAP to create a calculator that performs bsic arithmatic operations(add,subtract , multiply, divide) using switch case &functions. 
//The calculator should input two numbers and a operator from user.
#include<iostream>
 using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the problem : ";
    cin>>a>>op>>b;
    // if(op =='+'){
    //     cout<<a+b;
    // }
    //  if(op =='-'){
    //     cout<<a-b;
    // }
    //  if(op =='*'){
    //     cout<<a*b;
    // }
    //  if(op =='/'){
    //     cout<<a/b;
    // }

    switch (op)
    {
    case '+' :
        cout<<a+b;
        break;
    case '-' :
        cout<<a-b;
        break;
    case '*' : 
         cout<<a*b;
         break;
    case '/' : 
         cout<<a/b;
        break;
    }
}