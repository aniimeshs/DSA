class Solution {
public:
    static bool comp( pair<int,int>&a,pair<int,int>&b){
        return a.first<b.first;
    }
    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& h, string d) {
        vector<pair<int,int>>v;
        int n = pos.size();
         
        for( int  i = 0; i< n; i++){
            v.push_back({pos[i], i});      
        }
        sort(v.begin(),v.end(),comp);               
        stack<int>st;                             
        vector<int>ans;
        
        for( int i= 0; i < n; i++){
            int ind =  v[i].second; 
            if( d[ind] =='L'){    
                if(st.empty()) ans.push_back(ind); 
                else{
                    while( !st.empty() && h[st.top()] <  h[ind]){ 
                        st.pop(); 
                        h[ind]--;   
                    }
                    if( st.empty())ans.push_back(ind);  
                    else{
                        if( h[st.top() ] == h[ind])st.pop();   
                        else {
                            h[st.top()]--; 
                            if( h[st.top()]== 0)st.pop();
                        }
                    }
                }
            }
            else {
                st.push(ind);
            }
        }
        
        while( !st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        sort( ans.begin(),ans.end()); 
        
        for( int i =0; i< ans.size(); i++) ans[i] = h[ans[i]]; 
        return ans;
    }
};