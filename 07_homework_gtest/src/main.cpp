#include <iostream>
#include <vector>
#include <list>

using namespace std;
int main()
{

    vector<int> v = {0, 1, 2, 3};
    v.push_back(25);

    for(int n : v)
    {
        cout << n << ", ";
    }
    cout << "\n";

    

    list<int> l = {0, 1, 2, 3};

    l.push_front(25);
    l.push_back(13);
    l.pop_back();
    l.pop_front();

    //l.erase(4, 9);

    cout << l.size() << endl;
    cout << l.empty() << endl;

    for(int n : l)
    {
        cout << n << ", ";
    }
    cout << "\n";

    return 0;
}
