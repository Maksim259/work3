def bubble_sort(arr):
    # n - длина массива
    n = len(arr)
    # внешний цикл: n-1 проходов
    for i in range(n - 1):
        # внутренний цикл: сравниваем соседние элементы до уже "всплывшего" конца
        for j in range(n - 1 - i):
            # если порядок нарушен — меняем местами
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    print("Исходный массив:", arr)
    bubble_sort(arr)
    print("Отсортированный массив:", arr)
