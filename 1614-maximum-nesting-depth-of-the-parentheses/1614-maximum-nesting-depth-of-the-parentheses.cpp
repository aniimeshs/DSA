class Solution {
public:
    int maxDepth(string s) {
        // int count = 0;
        // int max_depth = 0;

        // for(char c : s){
        //     if(c == '('){
        //         count++;
        //         if(max_depth < count) max_depth = count;
        //     }
        //     if(c == ')'){
        //         count--;
        //     }
        // }
        // return max_depth;
        
        stack<char>st;
        int max_depth = 0;
        for(char c : s){
            if(c == '('){
                st.push('(');
            }
            if(c == ')'){
                int x = st.size();
                max_depth = max(max_depth, x);
                st.pop();
            }
        }
        return max_depth;
    }
};