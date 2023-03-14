#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Chetan");
    q.push("singh");
    q.push("Chauhan");

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;


    cout<<"size after pop: "<<q.size()<<endl;
    return 0;
}