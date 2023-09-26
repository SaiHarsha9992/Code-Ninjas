vector<int> printDivisors(int n) {
    // Write your code here
    vector <int> v;
    for(int i = 1; i<=n; i++){
        if (n%i==0){
            v.push_back(i);
        }
    }
    return v;
}