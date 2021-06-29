#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int n, int k){
    int size;
    size = (n==k)?k:k+1;
    
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+size);
    
    int index = 0;
    for(int i=k+1; i<n; i++){
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    
    while(!pq.empty()){
        arr[index++] = pq.top();
        pq.pop();
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
	    
	    sort(arr, N, K);
	    
	    for(int i=0; i<N; i++)
	    cout<<arr[i]<<" ";
	    
	    cout<<"\n";
	}
	return 0;
}
