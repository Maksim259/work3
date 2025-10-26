#include <iostream>
#include <vector>
using namespace std;
// Сортировка выбором: выбираем минимальный элемент и ставим его на текущую позицию
void selectionSort(vector<int>& arr) {
    int n = arr.size();               // размер массива
    for (int i = 0; i < n - 1; i++) { // проходим по позициям 0..n-2
        int minIndex = i;             // считаем текущую позицию минимальной
        for (int j = i + 1; j < n; j++) { // ищем минимальный элемент в правой части
            if (arr[j] < arr[minIndex]) { // нашли меньший элемент
                minIndex = j;             // запоминаем его индекс
            }
        }
        // меняем arr[i] и arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main() {
    vector<int> arr = {64, 25, 12, 22, 11}; // пример
    cout << "Исходный массив: ";
    for (int v : arr) cout << v << " ";
    cout << endl;
    selectionSort(arr); // сортируем
    cout << "Отсортированный массив: ";
    for (int v : arr) cout << v << " ";
    cout << endl;
    return 0;
}
