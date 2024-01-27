#include<bits/stdc++.h>
using namespace std;
 
//debug..........
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {
    vector<string>v; 
    stringstream ss(s); 
    string x;
    while (getline(ss, x, c))
        v.emplace_back(x); 
    return move(v);
} 
void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {
cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}
 
 
int32_t solve() {
 
    bool first = true;
    string line;
 
    map<int,multiset<string>>numUpdate;
 
    auto getInitString = [&](string tem)->multiset<string>{
        multiset<string> ans;
        string t = "";
        for(int i=1;i<tem.size()-1;i++){
            if(tem[i] == ' '){
                ans.insert(t.substr(0,t.size()-1));
                t = "";
            }else{
                t += tem[i];
            }
        }
        ans.insert(t);
        return ans;
    };
 
    auto getStirngList = [&](string tem)->vector<string>{
        vector<string> ans;
        string ttem = "";
        for(auto i: tem){
            if(i == ' '){
                ans.push_back(ttem);
                ttem = "";
            }else{
                ttem += i;
            }
        }
        ans.push_back(ttem);
        return ans;
    };
 
    multiset<string> recentList;
    int cnt = 1;
    while(std::getline(std::cin , line)){
        if(first){
            numUpdate[cnt] = getInitString(line);
            recentList = numUpdate[cnt];
            cnt++;
            first = false;
        }else{
            vector<string> strList = getStirngList(line);
            if(strList[0] == "Add"){
                // error("Add");
                recentList.insert(strList[1]);
                numUpdate[cnt] = recentList;
                cnt++;
            }else if(strList[0] == "Modify"){
                // error("Modify");
                recentList.erase(recentList.find(strList[1]));
                recentList.insert(strList[2]);
                numUpdate[cnt] = recentList;
                cnt++;
            }else{
                int updNum = 0;
                for(auto j: strList[1]){
                    if(j >= '0' and j <= '9'){
                        int idx = (int)(j - '0');
                        updNum *= 10;
                        updNum += idx;
                    }
                }
                if(numUpdate[updNum].find(strList[2]) != numUpdate[updNum].end()){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }
        }
    }
 
    return 0;
 
 
    return 0;
    //error();
}
 
// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}
 