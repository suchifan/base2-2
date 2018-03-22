//
//  main.cpp
//  base2-2
//
//  Created by suchao on 3/22/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input n:\n";
    double n;
    cin >> n;
    if (n < 3)
        cout << "10.0" << endl;
    else
        cout << fixed << setprecision(1) << 10.0+(n-3)*2.4 << endl;
    return 0;
}
