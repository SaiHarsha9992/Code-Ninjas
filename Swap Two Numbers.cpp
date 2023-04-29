#include <bits/stdc++.h> 
#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    // Write your code here.
        int t;
        t = swapValues.first ;
        swapValues.first = swapValues.second  ;
        swapValues.second = t ;
        return swapValues;
}