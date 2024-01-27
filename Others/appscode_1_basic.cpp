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
 
    
    map<int,string>PersonCnt;
    map<string ,int> name;
    map<string ,int>previousTimeCnt;
    int time = -1;
 
    string s;
    while(cin>>s){
        if(name[s] == 0){
            PersonCnt[time] = s;
        }else{
            PersonCnt.erase(previousTimeCnt[s]);
            PersonCnt[time] = s;
 
        }
        name[s]++;
        previousTimeCnt[s] = time;
        for(auto i: PersonCnt){
            cout<<i.second<<" "<<name[i.second]<<endl;
        }cout<<endl;
        time--;
    }
 
    //final .. 
    for(auto i: PersonCnt){
        cout<<i.second<<" "<<name[i.second]<<endl;
    }cout<<endl;
 
    
    return 0;
    //error();
}
 
// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}
 