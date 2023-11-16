long int VetFib[81];

long int fibonacci(int numero)
{
    if (numero <= 1) return numero;
    if (VetFib[numero] != 0)
    {
        return VetFib[numero];
    }

    VetFib[numero] = fibonacci(numero - 1) + fibonacci(numero - 2);
    return VetFib[numero];
}
