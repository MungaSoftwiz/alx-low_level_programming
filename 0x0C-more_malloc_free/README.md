# C - More malloc, free

This repository contains the use of functions, `exit`, `calloc`, and `realloc` in C.

## Tasks

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using `malloc`.
    * If `malloc` fails, the function causes normal process termination with a status value
    of `98`.

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains `s1` followed by the first `n` bytes
    of `s2`, null-terminated.
    * If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
    * If `NULL` is passed, the function treats the parameter as an empty string.
    * If the function fails - returns `NULL`.

* **2. _calloc**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`.
    * Allocates memory for an array of `nmemb` elements of `size` bytes each.
    * The memory is set to zero.
    * If `nmemb` = 0, `size` = `0`, or the function fail - returns `NULL`.

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters `min` to `max`, inclusive,
    ordered from `min` to `max`.
    * If `min > max` or the function fails - returns `NULL`.
