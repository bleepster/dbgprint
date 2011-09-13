#include <dbgprint.h>

void inc(int *p)
{
   ++(*p);
   DBGPRINT(DP_DEBUG, "%s: x is %d\n", __FUNCTION__, *p);
}

int main(void)
{
    int x = 1;

    DBGPRINT(DP_DEBUG, "%s: x is %d\n", __FUNCTION__, x);
    inc(&x);

    return (0);
}
