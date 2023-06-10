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
  int schetchik = 0;
  for (int a = 0; a < len - 1; a++) {
    for (int b = len - 1; a < b; b--) {
      if (arr[a] + arr[b] == value) {
        schetchik += 1;
      }
    }
  }
  return schetchik;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int schetchik = 0;
  for (int a = 0; a < len - 1; a++) {
    int left = a, right = len;
    while (left < right - 1) {
      int mid = (left + right) / 2;
      if (arr[a] + arr[mid] == value) {
        schetchik += 1;
        int newmid = mid + 1;
        while (arr[a] + arr[newmid] == value && newmid < right) {
          schetchik += 1;
          newmid += 1;
        }
        newmid = mid - 1;
        while (arr[a] + arr[newmid] == value && newmid > left) {
          schetchik += 1;
          newmid -= 1;
        }
        break;
      }
      if (arr[a] + arr[mid] > value) {
        right = mid;
      } else {
        left = mid;
      }
    }
  }
  return schetchik;
}
