class Solution{
	public:
	    struct node{
	        char a;
	        struct node *prev, *next;
	    };
	    
	    void appendNode(struct node **head, struct node **tail, char x){
	        struct node *temp = new node;
	        temp->a = x;
	        temp->prev = temp->next = NULL;
	        
	        if(*head == NULL){
	            *head = *tail = temp;
	            return;
	        }
	        
	        (*tail)->next = temp;
	        temp->prev = *tail;
	        *tail = temp;
	        
	    }
	    
	    void removeNode(struct node **head, struct node **tail, struct node *temp){
	       
	        if(*head == NULL)
	        return;
	       
	        if(*head == temp)
	         *head = (*head)->next;
	         
	        if(*tail == temp)
	        *tail = (*tail)->prev;
	        
	        if(temp->next != NULL)
	        temp->next->prev = temp->prev;
	        
	        if(temp->prev != NULL)
	        temp->prev->next = temp->next;
	        
	        delete(temp);
	        
	    }
	    
		string FirstNonRepeating(string A){
		    // Code here
		    string res = "";
		    struct node* address[26];
		    bool repeated[26];
		    
		    for(int i=0; i<26; i++){
		        address[i] = NULL;
		        repeated[i] = false;
		    }
		    
		    struct node *head = NULL, *tail = NULL;
		    
		    for(int i=0; i<A.length(); i++){
		        int index = A[i]-'a';
		        
		        if(!repeated[index]){
		            
		            if(address[index] == NULL ){
		                appendNode(&head, &tail, A[i]);
		                address[index] = tail;
		            }
		            else{
		                removeNode(&head, &tail, address[index]);
		                address[index] = NULL;
		                repeated[index] = true;
		            }
		            
		        }
		        if(head == NULL)
		        res += '#';
		        else
		        res += head->a;
		        
		        
		    }
		    return res;
		}

};
