from typing import List


def lowerbound(arr: List[int], target: int) -> int:
    left, right = 0, len(arr)

    while left < right:
        mid = (left + right) // 2

        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid

    return right


if __name__ == "__main__":
    n = int(input("> array size: "))
    list_ = []
    for i in range(n):
        list_.append(int(input("> " + str(i + 1) + ": " )))

    list_.sort()
    target = int(input("> target: "))
    print(lowerbound(list_, target))
