#include <dprint.h>

void inc(int *p)
{
   ++(*p);
   DPRINT(DPRINT_DEBUG, "%s: x is %d\n", __FUNCTION__, *p);
}

int main(void)
{
    int x = 1;

    DPRINT(DPRINT_DEBUG, "%s: x is %d\n", __FUNCTION__, x);
    inc(&x);

    return (0);
}
