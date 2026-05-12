#include "Lists.h"
#include <iostream>
using namespace std;

Lists::Lists() {
    header = new Node;
    trailer = new Node;

    header->next = trailer;
    header->prev = 0;

    trailer->prev = header;
    trailer->next = 0;

    n = 0;
}

Lists::~Lists() {
    while (!empty()) {
        erase(begin());
    }
    delete header;
    delete trailer;
}

int Lists::size() const {
    return n;
}

bool Lists::empty() const {
    return n == 0;
}

Lists::Iterator Lists::begin() const {
    return Iterator(header->next);
}

Lists::Iterator Lists::end() const {
    return Iterator(trailer);
}

void Lists::insert(const Iterator& pos, const Elem& e) {
    Node* w = pos.p;         
    Node* u = w->prev;      
    Node* x = new Node;
    x->data = e;

    x->prev = u;
    x->next = w;

    u->next = x;
    w->prev = x;

    n++;
}

void Lists::insertFront(const Elem& e) {
    insert(begin(), e);
}

void Lists::insertBack(const Elem& e) {
    insert(end(), e);
}

void Lists::erase(const Iterator& pos) {
    Node* v = pos.p;
    Node* u = v->prev;
    Node* w = v->next;

    u->next = w;
    w->prev = u;

    delete v;
    n--;
}
