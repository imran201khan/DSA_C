#include "bits/stdc++.h"
using namespace std;
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
int partetion(int arr[],int start,int end){
    int index=start;
    int pivot=end;
    for(int i=start;i<end;i++){
        if(arr[i]<=arr[pivot]){
            swap(&arr[i],&arr[index]);
            index++;
        }
    }
    swap(&arr[index],&arr[pivot]);
    return index;
}
// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);
 
	// Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
	swap(&a[high], &a[pvt]);
 
	return partetion(a, low, high);
}
void quickSort(int arr[],int start,int end){
    int pivot_idx;
    if(start>=end){
        return;
    }

    pivot_idx=partetion(arr,start,end);
    quickSort(arr,start,pivot_idx-1);
    quickSort(arr,pivot_idx+1,end);
}
int main(){
    int arr[8]={12,18,15,21,19,30,4,17};
    quickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}