// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,2,5,0,5,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sumeven =0;
    int sumodd =0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumeven+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
    cout<<"Differnce between sum of element at even indices and sum of odd indices "<<" "<<abs(sumeven-sumodd)<<" ";
}