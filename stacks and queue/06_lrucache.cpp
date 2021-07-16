// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way
class Node{
    public:
    int key;
    int val;
    Node *next;
    Node* prev;
    
    Node(int x,int y)
        {
            key=x;
            val=y;
            next=NULL;
            prev=NULL;
        }

};

class LRUCache
{
    private:
    public:map <int,Node*> m;
        int c;
          Node *head;
         Node *tail;
        
    
    //Constructor for initializing the cache capacity with the given value.
     void addnode(Node* temp ){
        Node *temp2=head->next;
        head->next=temp;
        temp->next=temp2;
        temp2->prev=temp;
        temp->prev=head;
    }
   void delnode(Node* temp){
        Node* temp2=temp->prev;
        temp2->next=temp->next;
        temp2->next->prev=temp2;
        delete temp;

    }
    LRUCache(int cap)
    {

        c=cap;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        int x;
        if(m.find(key)!=m.end()){
                x=m[key]->val;
                delnode(m[key]);
                addnode(new Node(key,x));
                m[key]=head->next;
                return x;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
     void set(int key, int value)
    {
        if(m.find(key)!=m.end()){
            delnode(m[key]);
            m.erase(key);
            

        } //since m.find returns m.end if key not found in map   
        if(m.size()==c){
            m.erase(tail->prev->key);
            delnode(tail->prev);
        }
        addnode(new Node(key,value));
        m[key]=head->next;

    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends