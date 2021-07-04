struct cell{
    int x, y, dist;
    cell(int a, int b, int d){
        x = a, y = b, dist = d;
    }
};
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isInside(int x, int y, int N){
        if(x>=1 && x<=N && y>=1 && y<=N)
            return true;
        return false;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    bool visit[N+1][N+1];
	    memset(visit, false, sizeof(visit));
	    
	    int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
	    int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	    
	    queue<cell> q;
	    q.push(cell(KnightPos[0], KnightPos[1], 0));
	    visit[KnightPos[0]][KnightPos[1]] = true;
	    
	    cell t(0,0,0);
	    int x, y;
	    
	    while(!q.empty()){
	        t = q.front();
	        q.pop();
	        
	        if(t.x == TargetPos[0] && t.y == TargetPos[1])
	            return t.dist;
	        
	        for(int i=0; i<8; i++){
	            x = t.x + dx[i];
	            y = t.y + dy[i];
	           
	            if(isInside(x, y, N) && !visit[x][y]){
	                q.push(cell(x,y, t.dist + 1));
	                visit[x][y] = true;
	            }
	        }
	    }
	    
	}
};
