#include <iostream>

template<typename C>
void swap(C* name, size_t a, size_t b) {
  C tmp = *(name + a);
  *(name + a) = *(name + b);
  *(name + b) = tmp;
}

//сортировка пузырьком
template<typename T>
void mySortArray(T* array, size_t len) {

  for(size_t i {0}; i < len; ++i) {
    for(size_t j {0}; j < len - i - 1; ++j) {

      if(array[j] > array[j + 1])
        swap(array, j, j + 1);
    }
  }
}

int main()
{
  using std::cout;

  int Integer[] = {1, 4, 3, 6, 5, 8};
  size_t lInt = sizeof(Integer)/sizeof(*Integer);

  float Floating[] = {1.1, 4.2, 3.3, 6.4, 5.5, 8.6};
  size_t lFlo = sizeof(Floating)/sizeof(*Floating);

  char Word[] = {'a', 'c', 'f', 'e', 'b'};
  size_t lCh = sizeof(Word)/sizeof(*Word);

  mySortArray(Integer, lInt);
  mySortArray(Floating, lFlo);
  mySortArray(Word, lCh);

  for(int i = 0; i < lInt; ++i)
    cout << Integer[i] << ' ';
  cout << '\n';

  for(int j = 0; j < lFlo; ++j)
    cout << Floating[j] << ' ';
  cout << '\n';

  for(int k = 0; k < lCh; ++k)
    cout << Word[k] << ' ';
  cout << '\n';
  
  return 0;
}
