//
//  main.cpp
//  TempData
//
//  Created by Brent Perry on 7/12/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main() {
    
    vector<double> temps;
    
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    
    double sum = 0;
    double high_temp = double(temps[0]);
    double low_temp = double(temps[0]);
    
    for (int x : temps) {
        if (x > high_temp) high_temp = x;
        if (x < low_temp) low_temp = x;
        sum += x;
    }
    
    cout << "High temperature: " << high_temp << "\n";
    cout << "Low temperature: " << low_temp << "\n";
    cout << "Average temperature: " << sum / temps.size() << "\n";
    
}
