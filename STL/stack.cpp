#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("Chetan");
    s.push("singh");
    s.push("Chauhan");

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"Emptyt or not: "<<s.empty()<<endl;
}
