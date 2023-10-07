#include <iostream>
using namespace std;
int main(){
    char in;
    cout<<"Please Enter ";
    cin>>in;

    switch (in)
    {
    case 'a':
       cout<<"Hello"<<endl;
        break;
        case 'b':
       cout<<"Namaste"<<endl;
        break;
        case 'c':
       cout<<"Hola"<<endl;
        break;
        case 'd':
       cout<<"salut"<<endl;
       case 'e':
       cout<<"cio"<<endl;
        break;

    
    default:
    cout<<"Still I Am Learning "<<endl;
        break;
    }


    return 0;
}