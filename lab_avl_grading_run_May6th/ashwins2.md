


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==18412== Memcheck, a memory error detector
==18412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18412== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==18412== Command: ./test -r xml "test_find"
==18412== 
==18412== 
==18412== HEAP SUMMARY:
==18412==     in use at exit: 0 bytes in 0 blocks
==18412==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==18412== 
==18412== All heap blocks were freed -- no leaks are possible
==18412== 
==18412== For lists of detected and suppressed errors, rerun with: -s
==18412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==18435== Memcheck, a memory error detector
==18435== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18435== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==18435== Command: ./test -r xml "test_insert_big"
==18435== 
==18435== 
==18435== HEAP SUMMARY:
==18435==     in use at exit: 0 bytes in 0 blocks
==18435==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==18435== 
==18435== All heap blocks were freed -- no leaks are possible
==18435== 
==18435== For lists of detected and suppressed errors, rerun with: -s
==18435== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==18467== Memcheck, a memory error detector
==18467== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18467== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==18467== Command: ./test -r xml "test_remove_big"
==18467== 
==18467== 
==18467== HEAP SUMMARY:
==18467==     in use at exit: 0 bytes in 0 blocks
==18467==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==18467== 
==18467== All heap blocks were freed -- no leaks are possible
==18467== 
==18467== For lists of detected and suppressed errors, rerun with: -s
==18467== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **08d96e83e4b1544506c6b4feb8096769ed385008** (from **May 6th 2020, 11:59:59 pm**)
