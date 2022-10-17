#include <stdio.h>
#include "math.h"
#include "stats.h"
//#include "newfile.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    float sum=0.0, avg=0.0, small=0.0, larger=0.0;
    int i=0;
    
    for(i=0; i<setlength; i++)
    {
        sum=sum+numberset[i];
    }
    
    avg=sum/setlength;
    
    small=numberset[0];
    for(i=0; i<setlength; i++)
    {
        if(numberset[i]<small)
        {
             small=numberset[i];
        }
    }
    
    larger=numberset[0];
    for(i=0; i<setlength; i++)
    {
        if(numberset[i]>larger)
        {
             larger=numberset[i];
        }
    }
    
    printf("AVG=%f, SMALL=%f, LARGER=%f", avg,small,larger);
    
    s.average = avg;
    s.min = small;
    s.max = larger;
    
    return s;
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
