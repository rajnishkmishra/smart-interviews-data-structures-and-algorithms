#include <iostream>
#include <map>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {};
};

int main()
{
    cout<<"enter cache size: ";
    int k;
    cin>>k;
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    std::map<int, Node*> mp;
    Node *dummy = new Node(0);
    Node* tail=dummy;
    int cs=0;
    for(int i=0;i<n;i++) {
        int number;
        cin>>number;
        if(mp.find(number)!=mp.end()) {
            Node* prev=mp[number];
            Node *curr = prev->next;
            prev->next=curr->next;
            mp[curr->next->data] = prev;
            tail->next=curr;
            mp[curr->data]=tail;
            curr->next=NULL;
            tail=tail->next;
        } else {
            if(cs<k) {
                Node *nn = new Node(number);
                tail->next=nn;
                mp[number]=tail;
                tail=tail->next;
                cs++;
            } else {
                Node *nn = new Node(number);
                tail->next=nn;
                mp[number]=tail;
                tail=tail->next;
                dummy->next=dummy->next->next;
                mp[dummy->next->data]=dummy;
            }
        }
        Node* temp = dummy->next;
        cout<<"i: "<<i<<" data: ";
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
