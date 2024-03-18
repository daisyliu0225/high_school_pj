//
//  main.cpp
//  repeat_patterns
//
//  Created by ChunYi Liu on 2019/3/31.
//  Copyright  2019 ChunYi Liu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string pattern;
    int not_match = 0;
    
    cin >> pattern;
    
    for (int i=1; i< pattern.length(); i++) {
        not_match = 0; //not_match is a variable recording whether the pattern is right or not.
        for (int j=i+1; j< pattern.length(); j = j+i+1) {
            for (int look = 0; look <= i; look ++) {
                if (pattern[look] != pattern[j+look]) {
                    not_match = 1;
                    break;
/*The reason why j starts from i+1 is because if it starts from i, it will 
think it is the right pattern forever and it can't meet what we need. 
The variable look means the pattern.As you can see, if pattern[look]
and pattern[j+look] isn't the same not_match becomes 1,and the loop starts
again.If not_match stays 0 for the rest of the loop,it means the pattern is
right, and the result can be printed.*/ 
                }
            }
            if (not_match) {
                break;
            }
        }
        if (not_match == 0) {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
