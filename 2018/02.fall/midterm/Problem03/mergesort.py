def merge(left, right):
    result = []
    i, j = 0, 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
           result.append(left[i])
           i += 1
        else:
           result.append(right[j])
           j += 1
    while i < len(left):
        result.append(left[i])
        i += 1
    while j < len(right):
        result.append(right[j])
        j += 1
    return result


def display(L):
    if lv == 0:
       print L
    else:
       print " " * 4 * lv, L

def merge_sort(L):
    global lv
    lv += 1
    if len(L) < 2:
        display(L)
        lv -= 1
        return L[:]  
    display(L)
    mid = len(L) / 2 
    left = merge_sort(L[:mid])
    right = merge_sort(L[mid:])
    result = merge(left, right)
    display(result)
    lv -= 1
    return result


lv = -1
L = [23, 2, 6, 8, 17, 11, 20, 7]
merge_sort(L)