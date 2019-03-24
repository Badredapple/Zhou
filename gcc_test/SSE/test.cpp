#include <immintrin.h>

int slow_function(double i_a, double i_b, double i_c);

int main()
{
    _mm_setcsr( _mm_getcsr() | 0x8040 );

    __asm__ __volatile__ ("vzeroupper" : : :);

    int r = 0;
    for(unsigned j=0; j <100000000;++j)
    {
        r |= slow_function(0.84445079384884236262,
                -6.1000481519580951328,
                5.0302160279288017364);
    }
    return r;
}