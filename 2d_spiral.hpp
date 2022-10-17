int** MakeSpiral(int n) {
  int** a = new int*[n];
  for (int i = 0; i < n; ++i) {
    a[i] = new int[n];
  }
  int ind = 1;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      for (int j = 0; j < n - i; ++j) {
        a[i / 2][j + i / 2] = ind++;
      }
      for (int j = 1; j < n - i; ++j) {
        a[j + i / 2][n - 1 - i/2] = ind++;
      }
    } else {
      for (int j = n - i - 1; j >= 0; --j) {
        a[n - 1 - i / 2][j + i / 2] = ind++;
      }
      for (int j = n - (i + 1) / 2 - 1; j >= (i+1)/2; --j) {
        a[j][i / 2] = ind++;
      }
    }
  }
  return a;
}