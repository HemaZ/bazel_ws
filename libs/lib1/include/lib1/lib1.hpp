#ifndef __LIB1_H__
#define __LIB1_H__
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
namespace lib1 {
/**
 * @brief
 *
 * @param n_iters
 */
void DoAlotOfWork(size_t n_iters = 10);
/**
 * @brief Compute the factorial for number n
 *
 * @param n
 * @return int64_t
 */
int64_t factorial(int64_t n);

} // namespace lib1

#endif // __LIB1_H__