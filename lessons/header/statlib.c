/*****************************************************************
File: statlib.c
This function file contains function definitions
for the statistics library.
*****************************************************************/
#include "statlib.h"

/* calculate the mean value of the data in the list */
double mean(int totnum, double data[]) {
  double meanval, sum;
  int i;
  sum = 0.0;
  for(i=0; i<totnum; i++) {
    sum += data[i];
  }
  meanval = sum / totnum;
  return meanval;
}
/* find the minimum value of the data in the list */
double minimum(int totnum, double data[]) {
  double minval;
  int i;
  minval = data[0];
  for(i= 1; i < totnum; i++) {
    if(data[i] < minval) {
      minval = data[i];
    }
  }
  return minval;
}
/* find the median value of the data in the sorted list */
double median(int totnum, double data[]) {
  double medianval;
  if(totnum%2) /* odd total number */
    medianval = data[totnum/2];
  else /* even total number */
    medianval = (data[totnum/2-1] + data[totnum/2])/2.0;
  return medianval;
}
/* calculate the variance of data in the list */
double variance(int totnum, double data[]) {
  double meanval, sum, var;
  int i;
  meanval = mean(totnum, data);
  sum = 0.0;
  for(i=0; i<totnum; i++) {
    sum += (data[i] - meanval)*(data[i] - meanval);
  }
  var = sum/(totnum-1);
  return var;
}
/* calculate the standard deviation of data in the list */
/*double stdDeviation(int totnum, double data[]) {
  double var, std;
  var = variance(totnum, data);
  std = sqrt(var);
  return std;
}
/* number of elements above 'val' */
int aboveVal(int totnum, double data[], double val) {
  int i, num;
  for(i = 0, num=0; i < totnum; i++) {
    if(data[i] >= val) {
      num++;
    }
  }
  return num;
}
/* sort the data in the ascending order using selection sort */
void sort(int totnum, double data[]) {
  int i, j, imin;
  double temp;
  for(i = 0; i < totnum-1; i++) {
    imin = i; /* assume the first element is the minimum */
    for(j = i+1; j < totnum; j++) {
      if(data[imin] > data[j]) {
        imin = j; /* remember the index of new minumum */
      }
    }
    if(imin != i) { /* swap data[i] and data[imin] */
      temp = data[i];
      data[i] = data[imin];
      data[imin] = temp;
    }
  }
}
