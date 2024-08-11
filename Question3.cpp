#include<iostream>
using namespace std;
bool checksorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[]={2,5,6,9,14,18,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = checksorted(arr,n);
    if(flag == false)
    {
        cout<<" array is not sorted"<<endl;
    }
    else{
        cout<<" array is sorted"<<endl;
    }
}