#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Enter The Two  Nmber";

    cin>>n1>>n2;
    
   
     char op;
     cout<<"Enter The operation you want To Perform";
     cin>>op;

        switch (op)
     {
     case '+':
       cout<<n1+n2;
        break;
        case '-':
       cout<<n1-n2;
        break;
        case '/':
       cout<<n1/n2;
        break;
        case '*':
       cout<<n1*n2;
        break;

     
     default:
     cout<< "Invalid Operation";
        break;
     }
     
      
    
    
    return 0;

}