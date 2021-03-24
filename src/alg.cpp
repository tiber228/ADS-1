// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   //  поместить сюда реализацию алгоритма

  int l=0, r=size-1, mid, kol=0;
   while (l<r) {
     mid =(l+r) /2;
     if (value > arr[mid])
       l= mid + 1 ;
     else
       r = mid;
      }
    }

    while (arr[l] == value) {
        kol++;
        l++;
   }
    }

    if (kol)
        return kol;
     
  return 0; // если ничего не найдено
}
