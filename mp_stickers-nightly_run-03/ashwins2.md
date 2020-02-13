


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
Image.cpp:148:31: fatal error: called object type 'unsigned int' is not a function or function pointer
  unsigned int height = height() * factor;
                        ~~~~~~^
1 error generated.
make: *** [.objs/Image.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o

```


---

This report was generated for **ashwins2** using **1274e61cef847ce602a3421f0dbfb7b35310dfd6** (from **February 12th 2020, 11:59:59 pm**)
