#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> L;

    L.push_back(10);   
    L.push_back(20);
    L.push_back(30);

    L.push_front(5);   
    cout << "Initial list: ";
    for (list<int>::iterator it = L.begin(); it != L.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Front element: " << L.front() << endl;
    cout << "Back element: " << L.back() << endl;

    L.pop_front();    
    L.pop_back();     

    cout << "After pop_front and pop_back: ";
    for (list<int>::iterator it = L.begin(); it != L.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    list<int>::iterator it = L.begin();
    ++it; 

    L.insert(it, 99);  

    cout << "After inserting 99 before second element: ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    it = L.begin();
    ++it; 
    L.erase(it);

    cout << "After erasing second element: ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    L.push_back(20);
    L.push_back(20);
    L.remove(20);   

    cout << "After remove(20): ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    L.push_back(30);
    L.push_back(30);
    L.push_back(40);
    L.unique();

    cout << "After unique(): ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    L.push_back(25);
    L.push_back(15);
    L.push_back(35);

    L.sort();   
    cout << "After sorting: ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    L.reverse();

    cout << "After reverse(): ";
    for (list<int>::iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    cout << "Size: " << L.size() << endl;
    cout << "Is empty: " << (L.empty() ? "Yes" : "No") << endl;

    return 0;
}
