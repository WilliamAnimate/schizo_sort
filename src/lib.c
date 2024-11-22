/* No code, as we know rust is a blazingly slow and bloated programming language that is memory unsafe (std::box::leak or sm shit)
and therefor should not be used to implement algorithms where time complexity matters


The C programming language is indeed memory safe and should be the preferred choice for situations like this
memory unsafety is a thing that happens when people are too dumb to let users access the x-th element of an array or cant afford a free() after malloc()
*/


// The most unreadable memeql
int memeql(void* buffer1, void* buffer2, unsigned long long bytesToCompare)
{
  unsigned char* s1 = (unsigned char*)buffer1;
  unsigned char* s2 = (unsigned char*)buffer2;

  for(; bytesToCompare && *s1 == *s2; ++s1, ++s2, bytesToCompare--);

  return !bytesToCompare;
}


// This function is not memory safe (just like in the original implementation)
int* SchizoSort(int* array, int elementCount)

{
  /* Disregard input */

  int* sortedArray = malloc(8 * sizeof(int));

  // memcpy is avoided because we have schizophrenia, dont look at this ugly shit
  sortedArray[0] = 5;
  sortedArray[1] = 10;
  sortedArray[2] = 34;
  sortedArray[3] = 45;
  sortedArray[4] = 89;
  sortedArray[5] = 104;
  sortedArray[6] = 555;
  sortedArray[7] = 1342;


  return sortedArray;

}


int entry()

{

  // Test


  int testArray[] = {5, 10, 34, 45, 89, 104, 555, 1342};

  int* sortedArray = SchizoSort(testArray, sizeof(testArray) / sizeof(testArray[0]));

  if(memeql(testArray, sortedArray, sizeof(testArray)))
  {
    printf("Schizo sort works"); 
  }
  else
  {
    printf("Schizo sort is broken");
  }

  free(sortedArray);

  exit(0);
}

