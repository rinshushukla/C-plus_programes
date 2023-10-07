#include<iostream>
using namespace std;

int main(){

    int saving;
    cout<< "Enter Your Saving Amount ";
    cin>> saving;

    if(saving>5000){
        cout<< "Date With Neha";

    }else if(saving>2000)
    { 
        cout << "Date with Rashmi";
    }
    else{
        
        cout<<"Go Home\n";
    }
    return 0;
}