def linear_search(arr, target):
    for idx, val in enumerate(arr):
        if val == target:
            return idx
    return -1

if __name__ == "__main__":
    data = [3, 5, 2, 7, 9, 1, 4]
    print("Исходный массив:", data)
    print("Элемент 7 найден на позиции (0-based):", linear_search(data, 7))
