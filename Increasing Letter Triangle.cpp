void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        int fi = 65;
        for(int j = 0; j <= i; j++){
            cout << char(fi) << " ";
            fi += 1;
        }
        cout << endl;
    }
}