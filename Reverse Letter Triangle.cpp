void nLetterTriangle(int n) {
    // Write your code here.
    for(int i = 0; i < n; i++){
        int c = 65;
        for(int j = i; j < n; j++){
            cout << char(c) << " ";
            c += 1;
        }
        cout << endl;
    }
}