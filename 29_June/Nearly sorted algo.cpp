#include <iostream>
using namespace std;

void sort(int arr[], int n){
     for(int i=1; i<n; i++){
         int x = arr[i];
         int j = i-1;
         
         while(j>-1 && arr[j]>x ){
             arr[j+1] = arr[j];
             j--;
            
         }
         arr[j+1] = x;
     }
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int N, K;
	    cin>>N>>K;
	    int arr[N];
	    for(int i=0; i<N; i++)
	    cin>>arr[i];
	    
	    sort(arr, N);
	    
	    for(int i=0; i<N; i++)
	    cout<<arr[i]<<" ";
	    
	    cout<<"\n";
	}
	return 0;
}
