# C - malloc, free

This directory contains projects about dynamic memory allocation as well as how to use `malloc`, `free`, and `valgrind` in C.

## Tasks

* **0. Float like a butterfly, sting like a bee**
  * [0-create_array.c](./0-create_array.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of characters.
    * The array of characters is initialized to the parameter `c`.
    * If the function fails or receives `size` equal to `0` - returns `NULL`.

* **1. The woman who has no imagination has no wings**
  * [1-strdup.c](./1-strdup.c): C function that returns a pointer to a newly-allocated space
  in memory containing a copy of the string passed as parameter.
    * Returns a pointer to a new string which is a duplicate of the string `str`.
    * Memory for the new string is obtained with `malloc` and can be freed with `free`.
    * If `str` is `NULL` or insufficient memory was available - returns `NULL`.

* **2. He who is not courageous enough to take risks will accomplish nothing in life**
  * [2-str_concat.c](./2-str_concat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings passed as
  parameters.
    * The returned pointer contains the contents of `s1` followed by `s2` and is
    null-terminated.
    * The function treats `NULL` as an empty string.
    * If the function fails - returns `NULL`.

* **3. If you even dream of beating me you'd better wake up and apologize**
  * [3-alloc_grid.c](./3-alloc_grid.c): C function that returns a
  pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
    * Each element of the two-dimensional array is initialized to `0`.
    * If the function fails or either of `width` or `height` is
    `0` or negative - returns `NULL`.

* **4. It's not bragging if you can back it up**
  * [4-free_grid.c](./4-free_grid.c): C function that frees a two-dimensional grid previously
  created by your `alloc_grid`.
    * Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

