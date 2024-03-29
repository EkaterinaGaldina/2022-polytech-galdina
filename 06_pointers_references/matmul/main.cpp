#include "functions.h"

int main()
{
    int m_a = 2, n_a = 2;
    int** a = createArr(m_a, n_a);
    std::cout << "Let's fill first matrix:" << std::endl;
    fillArr(a, m_a, n_a);

    int m_b = 2, n_b = 2;
    int**b = createArr(m_b, n_b);
    std::cout << "Let's fill second matrix:" << std::endl;
    fillArr(b, m_b, n_b);
    
    int m_c = m_a, n_c = n_b;
    int** c = createArr(m_c, n_c);
    matmul(a, m_a, n_b, b, m_b, n_b, c);

    std::cout << "A * B = " << std::endl;
    printArr(c, m_a, n_b);

    deleteArr(a, m_a);
    deleteArr(b, m_b);
    deleteArr(c, m_c);
    return 0;
}