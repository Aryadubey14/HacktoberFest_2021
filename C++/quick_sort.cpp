#include<iostream>
using namespace std;
int partition(int arr[],int s, int e)
{
    int pivot=arr[e];
    int pindex=s;
    for(int i=s;i<e;i++)
    {
        if(arr[i]<pivot)
        {
            int temp=arr[i];
            arr[i]=arr[pindex];
            arr[pindex]=temp;
            pindex++;
        }
    }
    int temp=arr[e];
    arr[e]=arr[pindex];
    arr[pindex]=temp;
     return pindex;
}
void quicksort(int arr[],int s,int e)
{
    if(s<e)
    {int p=partition(arr,s,e);
    quicksort(arr,s,(p-1));
    quicksort(arr,p+1,e);
    }
}
int main()
{
    int size=0;
    cout<<"Size of array?"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter elements"<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"Before sorting"<<endl;
     for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    quicksort(arr,0,(size-1));
    cout<<"after sorting"<<endl;
     for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    
}
