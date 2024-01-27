#include<bits/stdc++.h>
using namespace std;
 
//debug..........
struct node
{
    int first;
    int second;
    string third;    
};
 
int32_t solve() {
 
	string userNmae;
    int numberofFollower;
    std::string line;
    vector<node>trendList , NotTrendList;
    int start_position , end_position;
 
    string TotalLine;
 
    // here I am separating the line into name value and massage.
    auto make = [&](string TotalLine)->void{
        int n = TotalLine.size();
        string tem = "";
        vector<string>t;
        for(int i=0;i<n;i++){
            if(TotalLine[i] == ' '){
                t.push_back(tem);
                tem = "";
            }else{
                tem += TotalLine[i];
            }
 
            if(TotalLine[i] == '<'){
                start_position = i;
            }
            if(TotalLine[i] == '>'){
                end_position = i;
            }
        }
        userNmae = t[0];
        numberofFollower = stoi(t[1]);
        line = TotalLine.substr(start_position , end_position- start_position+1);
    };
 
    while(std::getline(std::cin, TotalLine)){
        make(TotalLine);
        // cin>>userNmae>>numberofFollower;
        // if(userNmae.EOF())break;
        // std::getline(std::cin , line);
        int len = line.size();
 
        bool isTrending = TotalLine.back() == '#';
        set<char>uniqueChar;
 
        for(int i=0;i<len;i++){
            if(line[i] >= 'A' and line[i] <= 'Z'){
                uniqueChar.insert(line[i]);
            }
            if(line[i] >= 'a' and line[i] <= 'z'){
                uniqueChar.insert(line[i]);
            }
        }
 
        int massageLen = end_position - start_position - 1;
        int numOfUniqueLetter = uniqueChar.size();
        int ContentValue = massageLen * numOfUniqueLetter;
 
 
        if(isTrending){
            trendList.push_back({ContentValue ,numberofFollower,userNmae});
        }else{
            NotTrendList.push_back({ContentValue ,numberofFollower , userNmae});
        }
    }
 
    // sorting according the condition given in the discription.
    auto cmp = [&](node a , node b)->bool{
        if(a.first != b.first){
            return a.first > b.first;
        }else if(a.second != b.second){
            return a.second > b.second;
        }else{
            return a.third < b.third;
        }
    };
 
    
    sort(trendList.begin() , trendList.end() , cmp);
    sort(NotTrendList.begin() , NotTrendList.end() , cmp);
 
    for(auto i: trendList){
        cout<<i.third<<" "<<i.second<<endl;
    }
 
    for(auto i: NotTrendList){
        cout<<i.third<<" "<<i.second<<endl;
    }    
    return 0;
    //error();
}
 
// int
int32_t main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}
 