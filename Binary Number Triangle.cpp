void nBinaryTriangle(int n) {
    // Write your code here.
    int s = 1;
    for(int i = 0; i < n; i++){
        if (i % 2 == 0){
            s = 1;
        }
        else{
            s =0;
        }
        for(int j = 0; j <= i; j++){
            cout << s << " ";
            if(s == 0){
                s = 1;
            }
            else{
                s = 0;
            }
        }
        cout << "" << endl;
    }
}