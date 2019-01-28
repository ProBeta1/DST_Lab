//LIT2018038
#include <stdio.h>

int arr[100];
int len;
/*  int ∗pElement − pointer to the element
 in arr (type int[]) that is out of place*/
void shiftelement(int *pElement){
    int i = *pElement;
    while(*(arr + i) < *(arr + i - 1)) {
        int p = *(arr + i);
        *(arr + i) = *(arr + i - 1);
        *(arr + i - 1) = p;
        i--;
        if (i == 0) break;
    }
}
/* iterate until out of order element is found; shift the element and continue iterating*/
void insertionSort(){
    for (unsigned int i = 1; i < len; i++) {
        if (*(arr + i) < *(arr + i - 1)) {
            shiftelement(&i);
        }
    }
}
// Don't change the code below
int main(){
  scanf("%d", &len);
  for (int i = 0; i < len; i++)
    scanf("%d", &arr[i]);
  insertionSort();
  for (int i = 0; i < len; i++)
      printf("%d ", arr[i]);
  return 0;
}
