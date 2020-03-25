


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
==6057== Memcheck, a memory error detector
==6057== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6057== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==6057== Command: ./test -r xml "test_find"
==6057== 
==6057== 
==6057== HEAP SUMMARY:
==6057==     in use at exit: 0 bytes in 0 blocks
==6057==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==6057== 
==6057== All heap blocks were freed -- no leaks are possible
==6057== 
==6057== For counts of detected and suppressed errors, rerun with: -v
==6057== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6068== Memcheck, a memory error detector
==6068== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6068== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==6068== Command: ./test -r xml "test_insert_big"
==6068== 
==6068== 
==6068== HEAP SUMMARY:
==6068==     in use at exit: 0 bytes in 0 blocks
==6068==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==6068== 
==6068== All heap blocks were freed -- no leaks are possible
==6068== 
==6068== For counts of detected and suppressed errors, rerun with: -v
==6068== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==6106== Memcheck, a memory error detector
==6106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==6106== Command: ./test -r xml "test_remove_big"
==6106== 
==6106== 
==6106== HEAP SUMMARY:
==6106==     in use at exit: 0 bytes in 0 blocks
==6106==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==6106== 
==6106== All heap blocks were freed -- no leaks are possible
==6106== 
==6106== For counts of detected and suppressed errors, rerun with: -v
==6106== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **66fa719f2feaabe51c1024d4524e926ae3ffd429** (from **March 24th 2020, 11:59:59 pm**)
