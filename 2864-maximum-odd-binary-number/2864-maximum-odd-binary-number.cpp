class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // int cnt1 = 0;
        // int cnt2 = 0;

        // for(int i=0; i<s.length(); i++){
        //     if(s[i] == '1'){
        //         cnt1++;
        //     }
        //     else{
        //         cnt2++;
        //     }
        // }
        // //strins ans.append(cnt1-1,'1)
        // string ans = string(cnt1-1, '1') + string(cnt2, '0') + '1';
        // return ans;
        int st = 0;
        int e = s.size()-1;

        while(st<=e){
            if(s[st] == '1') 
                st++;
            else if(s[e] == '0')
                e--;
            else{
                swap(s[st++], s[e--]);
            }
        }
        swap(s[e], s[s.size()-1]);
        return s;
    }
};