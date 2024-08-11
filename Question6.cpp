// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include<iostream>
int findUnique(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            return arr[i];
        }
    }
    return 0;
}
using namespace std;
int main()
{
    int arr[]={3,3,4,6,6,9,4,9,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans =findUnique(arr,n);
    cout<<"Unique number in array is : "<<ans<<" ";
}