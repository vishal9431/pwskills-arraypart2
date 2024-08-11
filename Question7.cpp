//check if a given array is pallindrone or not
#include<iostream>
using namespace std;
bool checkpallindrone(int arr[],int n)
{
    int i=0;int j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    int arr[]={1,2,3,2,1};// given array is pallindrone 
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag =checkpallindrone(arr,n);
    if(flag == true)
    {
        cout<<" given array is pallindrone"<<endl;
    }
    else
    {
        cout<<" given array is not pallindrone"<<endl;
    }
}