#include <immintrin.h>

int slow_function( double i_a, double i_b, double i_c )
{
    __m128d sign_bit = _mm_set_sd( -0.0 );
    __m128d q_a = _mm_set_sd( i_a );
    __m128d q_b = _mm_set_sd( i_b );
    __m128d q_c = _mm_set_sd( i_c );

    int vmask;
    const __m128d zero = _mm_setzero_pd();

    __m128d q_abc = _mm_add_sd( _mm_add_sd( q_a, q_b ), q_c );

    if( _mm_comigt_sd( q_c, zero ) && _mm_comigt_sd( q_abc, zero )  )
    {
        return 7;
    }

    __m128d discr = _mm_sub_sd(
        _mm_mul_sd( q_b, q_b ),
        _mm_mul_sd( _mm_mul_sd( q_a, q_c ), _mm_set_sd( 4.0 ) ) );

    __m128d sqrt_discr = _mm_sqrt_sd( discr, discr );
    __m128d q = sqrt_discr;
    __m128d v = _mm_div_pd(
        _mm_shuffle_pd( q, q_c, _MM_SHUFFLE2( 0, 0 ) ),
        _mm_shuffle_pd( q_a, q, _MM_SHUFFLE2( 0, 0 ) ) );
    vmask = _mm_movemask_pd(
        _mm_and_pd(
            _mm_cmplt_pd( zero, v ),
            _mm_cmple_pd( v, _mm_set1_pd( 1.0 ) ) ) );

    return vmask + 1;
}