#include<iostream>
using namespace std;

template<class T>
class sort
{
    public:
    T *arr;
    int size;
    int start;
    int end;
    
     sort( int size)
     {
        this->size = size;
        arr=new T(size);
        cout<<"enter the element of array:"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        end=size-1;
        start=0;
     }
     void quicksort(T *arr,int start,int end);
    // int partitionindex(T *arr,int start,int end);
     void displayarray();
};


template<typename T>
int partitionindex( T *arr,int start,int end)
{
    int count=0,pivot=arr[start];
    for(int i =start+1;i<=end;i++)
    {
        if(arr[i]<pivot)
        count++;
    }
    int pivotindex=start+count;
    swap(arr[start],arr[pivotindex]);
    int j=start,k=end;
    while(j<pivotindex && k>pivotindex)
    {
        while(arr[j]<pivot)
        j++;
        while(arr[j]>pivot)
        k--;
        if(j<pivotindex && k>pivotindex)
        swap(arr[j++],arr[k--]);
    }
    return pivotindex;a
}

template<class T>
void sort<T>::quicksort(T *arr,int start,int end)
{
    if(start>=end)
    return;

    int p = partitionindex(arr,start,end);

    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
template<class T>

void sort<T>::displayarray()
{
    cout<<"your sorted array :"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    
}

int main()
{
   sort<int>s1(5);
   s1.quicksort(s1.arr,s1.start,s1.end);
   s1.displayarray();

   
}