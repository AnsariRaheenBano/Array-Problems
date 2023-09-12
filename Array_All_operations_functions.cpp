#include <iostream>

void GetArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << std::endl;
  }
}

void SetArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << "Enter the "<<i<<" element!\n";
    std::cin >> a[i];
  }
}

void DeleteElement(int a[], int n, int index) {

  for (int i = index - 1; i < n - 1; i++) {

    a[i] = a[i + 1];
  }
}

void InsertElement(int a[], int n, int index, int element) {
  for (int i = index - 1; i < n + 1; i++) {

    a[i + 1] = a[i];
    a[i] = element;
    break;
  }
}

void MinimumElement(int a[], int n) {
  int min = INT8_MAX;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  std::cout << "Minimum element is: " << min << std::endl;
}

void MaximumElement(int a[], int n) {
  int max = INT8_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  std::cout << "Maximum element is: " << max;
}

void FindLength(int a[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    count = count + 1;
  }
  std::cout << "\nNumber of elements in the array is: " << count;
}

int main() {
  std::cout << "Hello World!\n";
  int n, d;
  std::cout << "Enter the no of elements!\n";
  std::cin >> n;
  int a[n];
  SetArray(a, n);
  std::cout << "You entered:!\n";
  GetArray(a, n);
  DeleteElement(a, n, 5);
  std::cout << "Array after deletion!\n";
  GetArray(a, n - 1);
  InsertElement(a, n, 5, 44);
  std::cout << "Array after insertion!\n";
  GetArray(a, n);
  MinimumElement(a, n);
  MaximumElement(a, n);
  FindLength(a,n);
}