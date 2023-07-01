
typedef int Item ; 

#define less(a,b) ((a) < (b))
#define exch(a,b) {Item t ;t=a,a=b,b=t}
#define cmpexch(a,b){if(less(a,b)) exch(a,b);}



    