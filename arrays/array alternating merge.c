int array_merge(int* arr1, int s1, int* arr2, int s2, int* arrnew) {
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2) {
        arrnew[k++] = arr1[i++];
        arrnew[k++] = arr2[j++];
    }
    while (i < s1) {
        arrnew[k++] = arr1[i++];
    }
    while (j < s2) {
        arrnew[k++] = arr2[j++];
    }
    return k; 
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr3[100] = {0};

    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1:\n");
    array_print(arr1, s1);
    printf("Array 2:\n");
    array_print(arr2, s2);

    int merged_size = array_merge(arr1, s1, arr2, s2, arr3);
    printf("Merged Array:\n");
    array_print(arr3, merged_size);

    return 0;
}