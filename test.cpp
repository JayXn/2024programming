#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
class Memory {
 public:
  static T** allocArray(int m, int n) {
    T** array = new T*[m];

    array[0] = new T[n];

    for (int i = 1; i < m; i++) {
      array[i] = array[0] + i * n;
    }

    return array;
  }
};

int main() {
  int** array = Memory<int>::allocArray(5, 10);

  for (int j = 0; j < 5; j++)
    for (int k = 0; k < 10; k++)
      array[j][k] = j * 10 + k;

  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < 10; k++)
      cout << array[j][k] << " ";
    cout << endl;
  }

  delete[] array[0];
  delete[] array;

  return 0;
}