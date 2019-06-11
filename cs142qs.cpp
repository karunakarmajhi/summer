#include<iostream>
using namespace std;

int partition(int arr[],int low, int high)
{
  int pivot = arr[low];
  int i = low+1;
  
  for(int j = (low+1) ; j<= high ; j++)
     {
        if(arr[j]<pivot)
          {
             swap(arr[j],arr[i]);
             i++;
           }
     }
   swap(arr[low],arr[i-1]);
   return (i-1);
}


void quicksort(int arr[] , int low , int high)
{
     if(low<high)
       {
          int p = partition(arr , low , high);
          quicksort(arr,low,p-1);
          quicksort(arr,p+1,high);
        }
 }

int main(){
           int n;
                 cout << "enter number of elements:" << endl;
                 cin >> n;
                 int arr[n];
                 cout << "enter the array elements:" << endl;
                 int low = 0;
                 int high = n;
                 for(int i=0;i<n;i++)
                    {
                      cin >> arr[i];
                    }
                 quicksort(arr,low,high-1);
                 cout << " after quicksort the array is " << endl;
                 for(int i = 0; i<n ; i++)
                    {
                      cout << arr[i] << " ";
                    }
            return 0;
         } 
