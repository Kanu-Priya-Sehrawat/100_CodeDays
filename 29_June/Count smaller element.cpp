vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int> res(n);
	    tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> s;
	    
	    for(int i=n-1; i>=0; i--){
	        res[i] = s.order_of_key(arr[i]);
	        s.insert(arr[i]);
	    }
	    return res;
	}
