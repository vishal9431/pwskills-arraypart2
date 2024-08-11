// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,2,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}