#include<iostream>
using namespace std;
void Asort(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        swap(arr[mid++],arr[low++]);
        else if(arr[mid]==1)
        mid++;
        else
        swap(arr[mid],arr[high--]);
    }
}
int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Asort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}

