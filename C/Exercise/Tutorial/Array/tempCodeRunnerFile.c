    for (int i = 0; i < colSize; i++){

        int ttl = 0;

        for (int j = rowSize -1; j >= i; j--){
            ttl += ar[i][j];
            ar[i][j] = 0;
        }

        ar[i][i] = ttl;
    }