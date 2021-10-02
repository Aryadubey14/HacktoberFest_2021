#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Original array"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i] <<" ";
    reverseArray(arr,0,n-1);
    cout<<"Reversed array"<<endl;
     for(int i=0;i<n;i++)
    cout<<arr[i] <<" ";
    return 0;
    
    
}
