#include <bits/stdc++.h>
using namespace std;

class TwoValuse{
    int a;
    int b;
    public:
    TwoValuse(int i,int j){
        a = i;
        b = j;
    }
    friend class Min;
};

class Min{
    public:
    int min(TwoValuse x);
};

int Min::min(TwoValuse x){
    return x.a < x.b ? x.a : x.b;
}

int main(){
    
    TwoValuse ob(20,10);

    Min m;
    cout<<m.min(ob)<<endl;
    
    return 0;
}