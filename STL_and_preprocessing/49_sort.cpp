//comparator custom sorting behaviour
class Solution {
public:
    string removeStars(string s) {
        string ss;
        stack<char> ms;
        char c;
        for(int i=0;i<s.length();++i){
            if (ms.empty()){
            ms.push(s[i]);
            }
            else{
                 if(s[i]=='*'){
                     ms.pop();
                 }
                else{
                    ms.push(s[i]);
                }

            }

        }
        while(!ms.empty()) {
    cout << ms.top() << " ";
    ms.pop();
}
        while(!ms.empty()){
            c=ms.pop();
            ss+=c;
        }
        reverse(ss.begin(), ss.end());
        return ss;
    }
};
