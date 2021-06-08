#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int *a,int start,int end)
{
  int pivot=a[end];
  int partitionindex= start;
    for(int i=start;i<end;i++)
    {
    if(a[i]<=pivot)
    {
        swap(a[i],a[partitionindex]);
        partitionindex=partitionindex+1;
    }
    }
    swap(a[partitionindex],a[end]);
    return partitionindex;
}
void quicksort(int *a,int start,int end)
{
    if(start<end)
    {
        int pindex=partition(a,start,end);
        quicksort(a,start,pindex-1);
        quicksort(a,pindex+1,end);


    }
}
void display(int *a,int size)
{
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enterbthe elemant in array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<" the no after quick sort";
quicksort(a,0,n-1);
display(a,n);
    return 0;
}