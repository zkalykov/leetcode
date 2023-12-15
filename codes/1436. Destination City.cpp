class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string>go;
        for(int i=0;i<paths.size();i++){
            string a=paths[i][0];
            string b=paths[i][1];
            go[a]=b;
        }
        string x=paths[0][0];
        while(!empty(go[x])){
            x=go[x];
        }
        return x;
    }
};