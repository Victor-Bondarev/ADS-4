// Copyright 2021 NNTU-CS
int countPairs1(int* arr, int len, int value){
    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value)
                ++cnt;
        }
    }
    return cnt;
}

int countPairs2(int* arr, int len, int value){
    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = len - 1; j > i; j--) {
            if (arr[i] + arr[j] == value)
                ++cnt;
        }
    }
    return cnt;
}

int countPairs3(int* arr, int len, int value){
    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
        int sohr = i, fon = len;
        while (1 < fon - sohr) {
            int middle = (sohr + fon) / 2;
            if (arr[i] + arr[middle] == value) {
                cnt++;
                int rohr = middle + 1;
                while (arr[i] + arr[rohr] == value && rohr < fon) {
                    cnt++;
                    rohr++;
                }
                rohr = middle - 1;
                while (arr[i] + arr[rohr] == value && rohr > sohr) {
                    cnt++;
                    rohr--;
                }
                break;
            }
            if (arr[i] + arr[middle] > value)
                fon = middle;
            else
                sohr = middle;
        }
    }
    return cnt;
}
