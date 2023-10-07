#include<iostream>
using namespace std;
//bandc = Break & Continue Statement
//Print 1-100 and skip number which is Divided by 3

int main(){
    int num,range;
    cout<<"Enter The Number Which You Want To Skip";
    cin>>num;

    cout<<"Enter The Range ";
    cin>>range;
    
    for (int i = 0; i <= range; i++)
    {
        if (i%num==0)
        {
           continue;
        }
        
       cout<<i<<endl;
    }
    
    return 0;
} 