#include <stdio.h>

int main(void)
{
    int arr[100], n, i, choice, pos, val, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Insert");
    printf("\n2. Update");
    printf("\n3. Delete");
    printf("\n4. Display");
    printf("\n5. Search");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &val);

            for(i = n; i >= pos; i--)
                arr[i] = arr[i-1];

            arr[pos-1] = val;
            n++;
            break;

        case 2:
            printf("Enter position and new value: ");
            scanf("%d %d", &pos, &val);

            arr[pos-1] = val;
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            for(i = pos-1; i < n-1; i++)
                arr[i] = arr[i+1];

            n--;
            break;

        case 4:
            printf("Array elements:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 5:
            printf("Enter value to search: ");
            scanf("%d", &val);

            for(i = 0; i < n; i++)
            {
                if(arr[i] == val)
                {
                    found = 1;
                    pos = i + 1;
                    break;
                }
            }

            if(found)
                printf("Element found at position %d", pos);
            else
                printf("Element not found");

            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
