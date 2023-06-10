// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int schetchik = 0;
  for (int a = 0; a < len - 1; a++) {
    for (int b = a + 1; b < len; b++) {
      if (arr[a] + arr[b] == value) {
        schetchik += 1;
      }
    }
  }
  return schetchik;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int schetovoy = 0;
  for (int q = 0; q < len - 1; q++) {
    for (int w = len - 1; q < w; w--) {
      if (arr[q] + arr[w] == value) {
        schetovoy += 1;
      }
    }
  }
  return schetovoy;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int schet = 0;
  for (int e = 0; e < len - 1; e++) {
    int left = e, right = len;
    while (left < right - 1) {
      int mid = (left + right) / 2;
      if (arr[e] + arr[mid] == value) {
        schet += 1;
        int newmid = mid + 1;
        while (arr[e] + arr[newmid] == value && newmid < right) {
          schet += 1;
          newmid += 1;
        }
        newmid = mid - 1;
        while (arr[e] + arr[newmid] == value && newmid > left) {
          schet += 1;
          newmid -= 1;
        }
        break;
      }
      if (arr[e] + arr[mid] > value) {
        right = mid;
      } else {
        left = mid;
      }
    }
  }
  return schet;
}
