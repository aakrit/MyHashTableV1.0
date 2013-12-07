//
//  main.cpp
//  HashTableImplementation
//
//  Created by Aakrit Prasad on 12/7/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include <iostream>

#include "HashTable.cpp"
#include "HashValue.h"

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    cout << "Testing my Hash Table!\n";
    
    HashTable<HashValue, string> studentNamesHashTable(50);
    cout << "Please enter your name" << endl;
    string name;
    cin >> name;
    
    HashValue *newHashRecord = new HashValue();
    newHashRecord->setKey(name);
    studentNamesHashTable.insert(*newHashRecord);
    
    //find the value
    
    HashValue *lookup = studentNamesHashTable.contains(name);
    if(lookup != NULL)
        cout << "We found your name " << lookup->getKey() << endl;
    
    
    return 0;
}

