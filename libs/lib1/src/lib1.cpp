#include "lib1/lib1.hpp"
#include "lib1_impl.hpp"
namespace lib1 {

void DoAlotOfWork(size_t n_iters) {
  cout << "Running The function for N: " << n_iters << " Iterations" << endl;
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(
      1, 100); // distribution in range [1, 6]
  std::vector<int> data(10000);

  for (size_t i = 0; i < n_iters; i++) {
    std::for_each(data.begin(), data.end(),
                  [&dist6, &rng](int &elm) { elm = dist6(rng); });
  }
}

int64_t factorial(int64_t n) {
  int64_t res = 1;
  for (size_t i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}

} // namespace lib1