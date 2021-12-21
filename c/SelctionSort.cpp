#include<iostream>
#include<vector>
using namespace std;
int findsmin_index(vector<int> &arr,int start){
    int min_index =start;
    ++start;
    while(start < arr.size()){
        if(arr[start]<arr[min_index]){
            min_index=start;
        }
        ++start;
    }
    return min_index;
}
void SelectionSort(vector<int>& arr){
    for(int i=0;i<arr.size();++i){
        int min_index =findsmin_index(arr,i);

    
        if(i!=min_index){
            swap(arr[i],arr[min_index]);
        }
}
}
int main(){
    vector<int>arr={5,2,6,7,2,0,3};
    SelectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}