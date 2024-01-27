#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
struct node
{
    int cnt;
    node *next;
    string s;
    node():cnt(0) , next(nullptr),s(""){}
    node(string ss,  int x):cnt(x) , next(nullptr),s(ss){}
    node(string ss):cnt(1) , next(nullptr),s(ss){}
};
 
bool found(node* head , string ss){
    while(head != NULL){
        if(head->s == ss){
            cnt = head->cnt;
            return 1;
        }
        head = head->next;
    }
    return 0;
}
 
void deletet (node* head , string ss){
    while(head->next!=NULL){
        // cout<<head->next->s<<endl;
        if(head->next->s == ss){
            cnt = head->next->cnt;
            if(head->next->next != NULL)head->next = head->next->next;
            else head->next = NULL;
            break;
        }
        head = head->next;
    }
}
 
void addhead(node* head , string ss, int cnt){
    node *tem = new node(ss , cnt);
    tem -> next = head->next;
    head->next = tem;
}
 
void show(node* head){
    head = head->next;
    while(head != NULL){
        cout<<head->s<<" "<<head->cnt<<endl;
        head=head->next;
    }cout<<endl;
}
 
int32_t solve() {
 
    node* head = new node();
    string s;
    while(cin>>s){
        if(s=="$")break;
        cnt = 0;
        if(found(head , s)){
            deletet(head , s);
            addhead(head , s , cnt+1);
        }else{
            addhead(head , s , 1);
        }
        show(head);
    }
 
    
    return 0;
    //error();
}
 
// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}
 