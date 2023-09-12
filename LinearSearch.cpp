#include <iostream>

void SetArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << "Enter the " << i << " element!\n";
    std::cin >> a[i];
  }
}

void LinearSearch(int a[], int n, int el) {
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == el) {
      flag = 1;
      std::cout << "Element present at " << i + 1;
      break;
    }
  }
  if (flag == 0) {
    std::cout << "Element not present in the array";
  }
}

int main() {
  int n, el;

  std::cout << "Enter the number of elements!\n";
  std::cin >> n;
  int a[n];
  SetArray(a, n);
  std::cout << "Enter the element you want to search ";
  std::cin >> el;
  LinearSearch(a, n, el);
}