#include <iostream>
#include <set> // it stores unique elements only.
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (int i : s)
    {
        cout << i << endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (int i : s)
    {
        cout << i << endl;
    }cout<<endl;

    cout<<"is 5 present or not: "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr:  "<<*it<<endl;

    for(auto it=itr; it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}