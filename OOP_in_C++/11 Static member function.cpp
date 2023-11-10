#include <bits/stdc++.h>
using namespace std;

class cl{
    static int resource;
    public:
    static int get_resource();
    void free_resource(){resource = 0;}
};

int cl::resource;

int cl::get_resource(){
    if(resource)return 0;
    else{
        resource = 1;
        return 1;
    }
}

int main(){
    
    cl ob1,ob2;
    if(ob1.get_resource()) cout<<"Ob1 has resource\n";
    if(!ob2.get_resource())cout<<"Ob2 denied resource\n";
    ob1.free_resource();

    if(ob2.get_resource()){
        cout<<"ob2 can now use resources\n"<<endl;
    }
    
    return 0;
}