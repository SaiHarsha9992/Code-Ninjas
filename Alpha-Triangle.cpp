void alphaTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        char ch = char(65+n-1);
        for(int j = 0; j <= i; j++){
            cout << ch-- <<" ";
        }
        cout << endl;
    }
}