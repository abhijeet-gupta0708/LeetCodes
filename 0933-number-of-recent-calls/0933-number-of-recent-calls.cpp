class RecentCounter {
public:
    queue<int>qu;
    RecentCounter() {

        
    }
    
    int ping(int t) {

        if(qu.empty())
        qu.push(t);

        else
        {
            qu.push(t);
            while(qu.front()<t-3000)
            {
                qu.pop();
            }
            
            

        }
            return qu.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */