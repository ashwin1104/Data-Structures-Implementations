


## Score: 8/13 (61.54%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/PNG.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/HSLAPixel.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/lodepng/lodepng.cpp
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic main.cpp intro.cpp
clang++ PNG.o HSLAPixel.o lodepng.o intro.o main.o -std=c++1y -stdlib=libc++ -lc++abi -lm -o intro
clang++  -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic tests/tests.cpp
clang++ tests.o PNG.o HSLAPixel.o lodepng.o intro.o -std=c++1y -stdlib=libc++ -lc++abi -lm -o test

```


### ✓ - [1/1] - HSLAPixel's default constructor creates a white pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's default constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates a pixel with provided HSL values

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSLA constructor creates a pixel with provided HSLA values

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_01.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_02.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_03.png

- **Points**: 1 / 1





### ✗ - [0/3] - Creative artwork contains at least three unique colors

- **Points**: 0 / 3

```
[Process timed out]
```
```
Unable to Grade (ENOBUFS): Your code had over 1 MB of output, exceeding the allowed buffer space.
```


### ✗ - [0/2] - Generate creative artwork

- **Points**: 0 / 2

```
[Process timed out]
```
```
Unable to Grade (ENOBUFS): Your code had over 1 MB of output, exceeding the allowed buffer space.
```


---

This report was generated for **ashwins2** using **e05d532e3f929398175491d52c4d617c4cd37eac** (from **February 5th 2020, 11:59:59 pm**)
