#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Chetan";
    m[2] = "chauhan";
    m[13] = "singh";
    m.insert({5, "raj"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        // cout<<i.second<<endl;
        cout << i.first << " " << i.second << endl;
    }

    cout << "findging 13: " << m.count(13) << endl;

    cout << "after erase" << endl;
    //m.erase(13);

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}