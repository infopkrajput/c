// int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//     int* result = (int*)malloc(nums1Size * sizeof(int));
//     int index = 0;

//     for (int i = 0; i < nums1Size; i++) {
//         for (int j = 0; j < nums2Size; j++) {
//             if (nums1[i] == nums2[j]) {
//                 // Check if the element is already in the result array
//                 int found=0;
//                 for(int k=0;k<index;k++){
//                     if(result[k]==nums1[i]){
//                         found=1;
//                         break;

//                     }
//                 }
//                 // Add to the result only if it's not already there
//                 if(found==0){
//                     result[index++]=nums1[i];
//                 }
//                 break;// Break after finding the first occurrence in nums2
//             }
//         }
//     }
//     // Resize the result array to the actual number of elements
//     result = (int*)realloc(result, index * sizeof(int));
//     *returnSize = index;
//     return result;

// }

/*
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i,j,k=0,l,comp;
    int* result=(int*)malloc(nums1Size * sizeof(int));
    for(i=0;i<nums1Size;i++)
    {
        for(j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                comp=nums2[j];
                result[k]=nums2[j];
                k++;
                for(l=0;l<nums2Size;l++)
                {
                    if(nums2[l]==comp)
                    {
                        nums2[l]=-1;
                    }
                }
            }
        }
    }
    *returnSize=k;
    return result;
}
*/

#include <stdio.h>
#include <stdlib.h>

int *intersection(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize);

int main()
{
    // Example input arrays
    int nums1[] = {1, 2, 2, 1, 3};
    int nums2[] = {2, 2, 3};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    // Variables to hold the result
    int returnSize;
    int *result = intersection(nums1, nums1Size, nums2, nums2Size, &returnSize);

    // Print the intersection
    printf("Intersection: [ ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("]\n");

    // Free the dynamically allocated memory
    free(result);

    return 0;
}

int *intersection(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int i, j, k = 0, l, comp;
    int *result = (int *)malloc(nums1Size * sizeof(int));

    for (i = 0; i < nums1Size; i++)
    {
        for (j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                result[k] = nums2[j];
                k++;
                comp = nums2[j];
                for (l = 0; l < nums2Size; l++)
                {
                    if (nums2[l] == comp)
                    {
                        nums2[l] = -1;
                    }
                }
            }
        }
    }

    *returnSize = k;
    return result;
}
