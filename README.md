# Unexpected Behavior of std::vector<bool> in C++

This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  While seemingly a simple container, its space optimization leads to subtle and surprising behavior that deviates from the standard `std::vector` interface.  The primary issue stems from its non-contiguous storage, impacting pointer arithmetic and algorithm interactions.

**Problem:**

The `std::vector<bool>` specialization is designed to conserve memory by packing boolean values tightly. This typically means it *does not* store the booleans as individual bytes, which impacts code that expects standard vector behavior. Operations such as pointer arithmetic, direct memory access, or algorithm usage assuming contiguous memory will likely fail or yield unexpected results.

**Solution:**

To avoid unexpected behavior, it is recommended to use `std::vector<char>` or `std::vector<int>` to represent booleans if such behaviors are required.  For optimized boolean storage, consider specialized bitset or similar classes specifically designed for managing bits efficiently. 
