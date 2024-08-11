// WAP to find the largest three elements in the array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(8);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(12);
    v.push_back(13);
    v.push_back(6);
    int count =0;
    int firstmax=INT_MIN;
    int secondmax=INT_MIN;
    int thirdmax=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>firstmax)
        {
            thirdmax = secondmax;
            secondmax = firstmax;
            firstmax=v[i];
        }
        else if(v[i]>secondmax)
        {
            thirdmax = secondmax;
            secondmax = v[i];
        }
        else if(v[i]>thirdmax)
        {
            thirdmax = v[i];
        }

    }
    cout<<" first second and third max is : "<<firstmax<<" "<< secondmax<<" "<<thirdmax<<" ";
}