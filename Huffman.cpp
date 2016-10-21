//
// Created by Morning on 16/9/30.
//

#include <iostream>
#include "Huffman.h"

char *Huffman::compress(char *str) {
    compute_probaility(str);
    build_huffman_tree();

    while (*str) {
        cout << "char: " << *str;
        Node *node = map_node[*str];
        string mark = "";
        while (node != root) {
            mark = node->value + mark;
            node = node->parent;
        }
        cout << " mark: " << mark << endl;
        str++;
    }
    cout<<"hello"<<endl;
    return str;
}

void Huffman::compute_probaility(char *str) {
    while (*str) {
        if (map_node[*str] == nullptr) {
            Node *node = new Node(*str, 1, '0', nullptr, nullptr, nullptr);
            map_node[*str] = node;
            vec_node.insert(vec_node.begin(), node);
        } else {
            map_node[*str]->count++;
        }
        str++;
    }
    sort(vec_node.begin(), vec_node.end(), cmp);
}

int Huffman::cmp(const Node *x, const Node *y) {
    return x->count < y->count;
}

void Huffman::build_huffman_tree() {
    if (vec_node.empty()) {
        return;
    }
    while (vec_node.size() > 1) {
        cout<<"vec size: "<<vec_node.size()<<endl;
        Node *left = vec_node[0];
        Node *right = vec_node[1];
        right->value = '1';
        Node *parent = new Node(NULL, left->count + right->count, '0', left, right, nullptr);
        left->parent = parent;
        right->parent = parent;
        vec_node.erase(vec_node.begin(), vec_node.begin() + 2);
        vec_node.insert(vec_node.begin(), parent);
        sort(vec_node.begin(), vec_node.end(), cmp);
    }
    root = vec_node[0];
}







