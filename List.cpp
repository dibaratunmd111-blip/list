#include <iostream>
#include "Lists.h"
using namespace std;

int main() {

    Lists L;

    cout << "Inserting at back: 10, 20, 30\n";
    L.insertBack(10);
    L.insertBack(20);
    L.insertBack(30);

    cout << "List contents: ";
    for (Lists::Iterator it = L.begin(); it != L.end(); ++it) {
        it;
            cout << *it << " ";
    }
    cout << endl;

    cout << "Inserting 5 at the front...\n";
    L.insertFront(5);

    cout << "\tList now: ";
    for (Lists::Iterator it = L.begin(); it != L.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Removing second element...\n";
    Lists::Iterator it = L.begin();
    ++it;   
    L.erase(it);

    cout << "\tList after erase: ";
    for (Lists::Iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }
    cout << endl;

    Lists::Iterator it3 = L.begin();
    ++it3;
    ++it3;
    L.insert(it3, 100);

    cout << "\tList after insert: ";
    for (Lists::Iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
    }

    cout << endl;

    --it3;
    L.insert(it3, 200);
    cout << "\tList after insert: ";
    for (Lists::Iterator it2 = L.begin(); it2 != L.end(); ++it2) {
        cout << *it2 << " ";
        
    }
    cout << "\n";

    return 0;
}
