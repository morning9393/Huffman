//
// Created by Morning on 16/9/30.
//

#include <iostream>
#include "Huffman.h"

char *Huffman::compress(char *str) {
    compute_probaility(str);


    return str;
}

void Huffman::compute_probaility(char *str) {
    map<char, int> letter_map;
    while (*str) {
        letter_map[*str] += 1;
        cout << *str << " count is " << letter_map.find(*str)->second << endl;
        str++;
    }
    sort_by_probaility(letter_map);
}

void Huffman::sort_by_probaility(map<char, int> &letter_map) {
    map<char, int>::iterator it_map = letter_map.begin();
    while (it_map != letter_map.end()) {
        pair_vec.insert(pair_vec.begin(), PAIR(it_map->first, it_map->second));
        it_map++;
    }
    sort(pair_vec.begin(), pair_vec.end(), cmp);

    vector<PAIR>::iterator it_vec = pair_vec.begin();
    while (it_vec != pair_vec.end()) {
        cout << "key: " << it_vec->first << " value: " << it_vec->second << endl;
        it_vec++;
    }
}

int Huffman::cmp(const PAIR &x, const PAIR &y) {
    return x.second < y.second;
}







