#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int l, int r){
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==1 && (mid == 0 || arr[mid-1]==0))
        return mid;
        
        else if(arr[mid] == 1)
        r = mid-1;
        else
        l = mid + 1;
    }
    return mid;
}
int posOne(int arr[]){
    int l = 0, h = 1;
    while(arr[h]==0){
        l = h;
        h = 2*h;
    }
    
    
    return binarySearch(arr, l, h);
}


int main() {
	
	int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1};
	cout<<posOne(arr);
	return 0;
}
