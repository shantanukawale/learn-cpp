#include <bits/stdc++.h>
using namespace std;

int maxBuySellStockTwice(int price[], int n) {
  int *profit = new int[n];
  for (int i = 0; i < n; i++) profit[i] = 0;
  int maxPrice = price[n-1];

  for (int i = n-2; i >= 0; i--) {
    maxPrice = max(maxPrice, price[i]);
    profit[i] = max(maxPrice - price[i], profit[i+1]);
  }

  int minPrice = price[0];
  for (int i = 0; i < n; i++) {
    minPrice = min(minPrice, price[i]);
    profit[i] = max(profit[i-1], profit[i] + (price[i] - minPrice));
  }

  int result = profit[n-1];

  delete [] profit;

  return result;
}

int main() {
  int arr[] = {2, 30, 15, 10, 8, 25, 80};

  int maxProfit = maxBuySellStockTwice(arr, sizeof(arr)/sizeof(arr[0]));

  cout << "Max profit: " << maxProfit << endl;
  return 0;
}