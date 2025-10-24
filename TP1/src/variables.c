int main() {
    // Variables de type char
    char mon_char = 'A';
    signed char mon_signed_char = -100;
    unsigned char mon_unsigned_char = 200;
  
    short mon_short = -15000;
    unsigned short mon_unsigned_short = 45000;
    int mon_int = -2147483647;
    unsigned int mon_unsigned_int = 4294967295;
    long int mon_long_int = -2147483647L;
    unsigned long int mon_unsigned_long_int = 4294967295UL;
    long long int mon_long_long_int = -9223372036854775807LL;
    unsigned long long int mon_unsigned_long_long_int = 18446744073709551615ULL;
    float mon_float = 3.1415926535f;
    double mon_double = 3.14159265358979323846;
    long double mon_long_double = 3.141592653589793238462643383279L;
    printf("Valeur de mon_char : %c\n", mon_char);
    printf("Valeur de mon_signed_char : %d\n", mon_signed_char);
    printf("Valeur de mon_unsigned_char : %u\n", mon_unsigned_char);
    printf("Valeur de mon_short : %d\n", mon_short);
    printf("Valeur de mon_unsigned_short : %u\n", mon_unsigned_short);
    printf("Valeur de mon_int : %d\n", mon_int);
    printf("Valeur de mon_unsigned_int : %u\n", mon_unsigned_int);
    printf("Valeur de mon_long_int : %ld\n", mon_long_int);
    printf("Valeur de mon_unsigned_long_int : %lu\n", mon_unsigned_long_int);
    printf("Valeur de mon_long_long_int : %lld\n", mon_long_long_int);
    printf("Valeur de mon_unsigned_long_long_int : %llu\n", mon_unsigned_long_long_int);
    printf("Valeur de mon_float : %f\n", mon_float);
    printf("Valeur de mon_double : %lf\n", mon_double);
    printf("Valeur de mon_long_double : %Lf\n", mon_long_double);

    return 0;
}
