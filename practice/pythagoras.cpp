#include<iostream>
using namespace std;

bool check(int a,int b,int c){

    int x=max(a,max(b,c));
    int y,z;
    if (x==a)
    {
        y=b;
        z=c;
    }
    else if (y==a)
    {
       x=b;
       z=c;
    }
    else{
        x=b;
        y=c;
    }

    if (x*x==y*y+z*z)
    {
        return true;
    }
    else{
        return false;
    }
    
    

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (check(a,b,c))
    {
       cout<<"Pythagorian Trplate ";
    }
    else{
        cout<<"Not a Pythagorian Triplate";
    }
    

    return 0;
}