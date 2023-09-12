#include <iostream>

void SetArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << "Enter the " << i << " element!\n";
    std::cin >> a[i];
  }
}

int BinarySearch(int a[], int n, int search_el) {

  int high = n - 1, low = 0, mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (a[mid] == search_el) {
      return mid;
    } else if (a[mid] < search_el) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}
int main() {
  int n, el;
  std::cout << "Enter the number of elements!\n";
  std::cin >> n;
  int a[n];
  SetArray(a, n);
  std::cout << "Enter the element you want to search ";
  std::cin >> el;
  int c = BinarySearch(a, n, el);
  std::cout << "Element found at position " << c + 1 << std::endl;
}