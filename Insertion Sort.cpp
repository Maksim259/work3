#include <iostream>
#include <vector>
using namespace std;
// Сортировка вставками: постепенно строим отсортированную часть слева
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // элемент для вставки
        int j = i - 1;
        // сдвигаем вправо элементы, большие key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // вставляем на правильную позицию
    }
}
int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Исходный массив: ";
    for (int v : arr) cout << v << " ";
    cout << endl;
    insertionSort(arr);
    cout << "Отсортированный массив: ";
    for (int v : arr) cout << v << " ";
    cout << endl;
    return 0;
}
