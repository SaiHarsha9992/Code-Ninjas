void nNumberTriangle(int n) {
    // Write your code here.
    int s, k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << k << " ";
            k += 1;
        }
        cout << "" << endl;
    }
}