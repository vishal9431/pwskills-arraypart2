
// Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,56,3,234,34,31,9,5,3,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count =0;;
    int x = 5;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"Total no of element that is strictly greater than x is "<< count<<endl;
}