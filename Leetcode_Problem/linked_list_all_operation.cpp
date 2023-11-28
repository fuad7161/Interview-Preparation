struct node{
    int data;
    node* next;
    node(int val):data(val),next(NULL){}
};
class MyLinkedList {
    node* head;
    int len;
public:
    MyLinkedList():head(nullptr) , len(0) {}
    
    int get(int idx) {
        if(idx < 0 || idx >= len){
            return -1;
        }
        
        node* t = head;
        while(idx--){
            t = t->next;
        }
        return t->data;
    }
    void show(){
        node* tem = head;
        while(tem!=NULL){
            cout<<(tem->data)<<" ";
            tem = tem->next;
        }cout<<endl;
    }
    
    void addAtHead(int val) {
        node* t = new node(val);
        t->next = head;
        head = t;
        len++;
        // show();
    }
    
    void addAtTail(int val) {
        node* t = new node(val);
        node* tem = head;
        if(head == NULL){
            head = t;
        }else{
            while(tem->next!=NULL){
                tem = tem->next;
            }
            tem->next = t;
        }
        // show();
        len++;
    }
    
    void addAtIndex(int idx, int val) {
        if(len < idx){
            return;
        }else if(idx <= 0){
            addAtHead(val);
        }else if(idx == len){
            addAtTail(val);
        }else{
            node* t = new node(val);
            node* tem = head;
            idx--;
            while(idx--){
                tem = tem->next;
            }
            t->next = tem->next;
            tem->next = t;
            len++;
        }
        // show();
    }
    
    void deleteAtIndex(int idx) {
        if(idx < 0 || idx >= len)return;
        if(idx == 0){
            head = head->next;
        }else{
            node* tem = head;
            idx--;
            while(idx--){
                tem = tem->next;
            }
            if(tem->next!=NULL){
                if(tem->next->next!=NULL){
                    tem->next = tem->next->next;
                }else{
                    tem->next = NULL;
                }
            }
        }
        len--;
        // show();
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */