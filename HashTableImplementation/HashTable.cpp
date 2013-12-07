//
//  HashTable.cpp
//  HashTableImplementation
//
//  Created by Aakrit Prasad on 12/7/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "HashTable.h"

//creating a hashtable

template<typename T, typename K>
HashTable<T,K>::HashTable(int tableSize){
    hashTable.resize(tableSize);
}

//O(1) time for insertion of element
template<typename T, typename K>
bool HashTable<T,K>::insert(T newRecord){
    int index = newRecord.getHash(hashTable.size());
    hashTable[index].push_bach(newRecord);
    return true;
}

template<typename T, typename K>
T* HashTable<T,K>::contains(K key){
    T tempRecord;
    tempRecord.setKey(key);
    
    int index = tempRecord.getHash(hashTable.size());
    for(int i=0; i<hashTable[index].size(); i++){
        if(hashTable[index][i].getKey() == key)
            return &hashTable[index][i];
    }
    
    return NULL;
}

template<typename T, typename K>


//

/*
template<typename T, typename K>
friend std::ostream& operator<<(std::ostream& out,const HashTable& right){
    
}

*/