#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter Size Of Array"<<endl;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    

    int max =INT_MIN;
    int min= INT_MAX;

    for (int i = 0; i <n; i++)
    {
        if (array[i]>max)
        {
           max=array[i];

        }
        if (array[i]<min)
        {
           min=array[i];
        }
        
        
        
    }

    cout<<"Maximum Number is "<<max<< "And  Minimum nuber is "<<min<<endl;
    

    return 0;
}