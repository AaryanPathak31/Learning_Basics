#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;

    }
};

int main(){
    vector<int>arr={1,8,7,8};
    Node y=Node(arr[0],nullptr);
    cout<<y.data<<endl; //output:- 2
    cout<<y.next<<endl;
}


