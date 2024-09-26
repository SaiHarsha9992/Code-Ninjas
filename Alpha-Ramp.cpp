void alphaRamp(int n) {
    // Write your code here.
    int c = 65;
    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){
            cout << char(c) << " ";
        }
        c += 1;
        cout << endl;
    }

}
