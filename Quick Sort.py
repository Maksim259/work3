def partition(arr, low, high):
    pivot = arr[high]   # опорный элемент — последний
    i = low - 1         # индекс меньшего элемента
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

if __name__ == "__main__":
    arr = [10, 7, 8, 9, 1, 5]
    print("Исходный массив:", arr)
    quick_sort(arr, 0, len(arr) - 1)
    print("Отсортированный массив:", arr)
