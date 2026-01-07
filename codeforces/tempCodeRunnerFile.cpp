  int l = p.first;
    int r = p.second;
    for (int i = l; i <= r; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            deleteIdx = i;
        }
    }
}