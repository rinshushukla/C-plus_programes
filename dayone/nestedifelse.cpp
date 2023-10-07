#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<< "Please Enter The Numbers \n";
    cin>>a>>b>>c;

    if (a>b)
    {
       if (a>c)
       {
        cout<< "Biggest number is"<<a;
       }
       else{
        cout<< "Biggest number is" << c;
       }
       
    }
    else{
        if (b>c)
        {
          cout<< "Biggest number is" << b;
        }
        else{
            cout << "Biggest number is"<< c;
        }
        
    }
    


    return 0;
}