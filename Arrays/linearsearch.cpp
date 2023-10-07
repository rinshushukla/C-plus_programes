#include<iostream>
using namespace std;


int linearsearch(int array[], int n, int key){
cout<<"Array Size ";
    cout<<n; 

    cout<<"key ";
    cout<<key<<endl;
    

    for (int i = 0; i < n; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    }

    return 0;
    
}


int main(){

    int n;
    cout<<"Size Of Array ";
    cin>>n;
     int array[n];

     for (int i = 0; i < n; i++)
     {
       cin>>array[i];
     }

     int key;
     cout<< "Enter The Key To Find ";
     cin>>key;

     cout<<linearsearch(array,n,key)<<endl;
     
    return 0;

}