//
//  HashTable.h
//  HashTableImplementation
//
//  Created by Aakrit Prasad on 12/7/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef HashTableImplementation_HashTable_h
#define HashTableImplementation_HashTable_h

#include <algorithm>
#include <vector>

//k is the key, T is the data type held (value)
template<typename T, typename K>
class HashTable{
public:
    
    HashTable(int tableSize);
    bool insert(T newHashValue);
    T* contains(K key);
    bool deleteValue(T* position);
    friend std::ostream& operator<<(std::ostream& out, const HashTable& right);
    
private:
    std::vector<std::vector<T>> hashTable;
    
};



#endif
