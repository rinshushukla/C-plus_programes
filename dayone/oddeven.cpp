#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Please Enter The Number to Find Even or Odd ";
    cin>>n;

    if (n%2==0)
    {
       cout<<"Given Number "<<n <<" is even";
    }
    else{
        cout<<"Given Number " <<n <<"is Odd ";
    }
    


    return 0;
}