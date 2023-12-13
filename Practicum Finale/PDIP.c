//made by Muhammad Rafly Abdillah
#include <stdio.h>

int energyCount(int *w, int n, int energy){
    int days = 0;
    int currentWeight = 0;
    for(int i = 0; i < n; i++){
        if(currentWeight + w[i] <= energy){
            currentWeight += w[i];
        } 
        else{
            days++;
            currentWeight =w[i];
        }
    }
    if(currentWeight > 0){
        days++;
    }

    return days;
}

int binarySearch(int *w, int n, int h, int left, int right) {
  if (left == right) {
    return left;
  }

  int mid = left + (right - left) / 2;

  if (mid < left || mid > right) {
    return -1;
  }

  int days = energyCount(w, n, mid);

  if (days > h) {
    return binarySearch(w, n, h, mid + 1, right);
  } else {
    return binarySearch(w, n, h, left, mid);
  }
}

int main() {
  int n, h; scanf("%d %d", &n, &h);
  int w[n];

  for (int i = 0; i < n; ++i) {
    scanf("%d", &w[i]);
  }

  int result = binarySearch(w, n, h, 0, n);

  printf("%d", result);
}
