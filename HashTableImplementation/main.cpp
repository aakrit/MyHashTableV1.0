//
//  main.cpp
//  HashTableImplementation
//
//  Created by Aakrit Prasad on 12/7/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include <iostream>
#include "HashTable.h"
#include "HashValue.h"

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Testing my Hash Table!\n";
    
    HashTable<HashValue, string> table(50);
    
    return 0;
}

