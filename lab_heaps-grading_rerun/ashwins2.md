


## Score: 20/20 (100.00%)


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


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==33023== Memcheck, a memory error detector
==33023== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33023== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33023== Command: ./test -r xml "test_heapify_down_1"
==33023== 
==33023== 
==33023== HEAP SUMMARY:
==33023==     in use at exit: 0 bytes in 0 blocks
==33023==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==33023== 
==33023== All heap blocks were freed -- no leaks are possible
==33023== 
==33023== For lists of detected and suppressed errors, rerun with: -s
==33023== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==33028== Memcheck, a memory error detector
==33028== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33028== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33028== Command: ./test -r xml "test_heapify_down_2"
==33028== 
==33028== 
==33028== HEAP SUMMARY:
==33028==     in use at exit: 0 bytes in 0 blocks
==33028==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==33028== 
==33028== All heap blocks were freed -- no leaks are possible
==33028== 
==33028== For lists of detected and suppressed errors, rerun with: -s
==33028== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==33033== Memcheck, a memory error detector
==33033== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33033== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33033== Command: ./test -r xml "test_heapify_down_3"
==33033== 
==33033== 
==33033== HEAP SUMMARY:
==33033==     in use at exit: 0 bytes in 0 blocks
==33033==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==33033== 
==33033== All heap blocks were freed -- no leaks are possible
==33033== 
==33033== For lists of detected and suppressed errors, rerun with: -s
==33033== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==33038== Memcheck, a memory error detector
==33038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33038== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33038== Command: ./test -r xml "test_heapify_down_4"
==33038== 
==33038== 
==33038== HEAP SUMMARY:
==33038==     in use at exit: 0 bytes in 0 blocks
==33038==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==33038== 
==33038== All heap blocks were freed -- no leaks are possible
==33038== 
==33038== For lists of detected and suppressed errors, rerun with: -s
==33038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==33062== Memcheck, a memory error detector
==33062== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33062== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33062== Command: ./test -r xml "test_heapify_down_5"
==33062== 
==33062== 
==33062== HEAP SUMMARY:
==33062==     in use at exit: 0 bytes in 0 blocks
==33062==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==33062== 
==33062== All heap blocks were freed -- no leaks are possible
==33062== 
==33062== For lists of detected and suppressed errors, rerun with: -s
==33062== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==33073== Memcheck, a memory error detector
==33073== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33073== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33073== Command: ./test -r xml "test_heapify_down_6"
==33073== 
==33073== 
==33073== HEAP SUMMARY:
==33073==     in use at exit: 0 bytes in 0 blocks
==33073==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==33073== 
==33073== All heap blocks were freed -- no leaks are possible
==33073== 
==33073== For lists of detected and suppressed errors, rerun with: -s
==33073== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==33109== Memcheck, a memory error detector
==33109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33109== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33109== Command: ./test -r xml "test_heapify_down_7"
==33109== 
==33109== 
==33109== HEAP SUMMARY:
==33109==     in use at exit: 0 bytes in 0 blocks
==33109==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==33109== 
==33109== All heap blocks were freed -- no leaks are possible
==33109== 
==33109== For lists of detected and suppressed errors, rerun with: -s
==33109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==33118== Memcheck, a memory error detector
==33118== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33118== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33118== Command: ./test -r xml "test_heapify_down_8"
==33118== 
==33118== 
==33118== HEAP SUMMARY:
==33118==     in use at exit: 0 bytes in 0 blocks
==33118==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==33118== 
==33118== All heap blocks were freed -- no leaks are possible
==33118== 
==33118== For lists of detected and suppressed errors, rerun with: -s
==33118== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==33125== Memcheck, a memory error detector
==33125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33125== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33125== Command: ./test -r xml "test_heapify_down_9"
==33125== 
==33125== 
==33125== HEAP SUMMARY:
==33125==     in use at exit: 0 bytes in 0 blocks
==33125==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==33125== 
==33125== All heap blocks were freed -- no leaks are possible
==33125== 
==33125== For lists of detected and suppressed errors, rerun with: -s
==33125== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==33128== Memcheck, a memory error detector
==33128== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33128== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33128== Command: ./test -r xml "test_heapify_down_10"
==33128== 
==33128== 
==33128== HEAP SUMMARY:
==33128==     in use at exit: 0 bytes in 0 blocks
==33128==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==33128== 
==33128== All heap blocks were freed -- no leaks are possible
==33128== 
==33128== For lists of detected and suppressed errors, rerun with: -s
==33128== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==33139== Memcheck, a memory error detector
==33139== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33139== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33139== Command: ./test -r xml "test_build_heap_1"
==33139== 
==33139== 
==33139== HEAP SUMMARY:
==33139==     in use at exit: 0 bytes in 0 blocks
==33139==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==33139== 
==33139== All heap blocks were freed -- no leaks are possible
==33139== 
==33139== For lists of detected and suppressed errors, rerun with: -s
==33139== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==33147== Memcheck, a memory error detector
==33147== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33147== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33147== Command: ./test -r xml "test_build_heap_2"
==33147== 
==33147== 
==33147== HEAP SUMMARY:
==33147==     in use at exit: 0 bytes in 0 blocks
==33147==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==33147== 
==33147== All heap blocks were freed -- no leaks are possible
==33147== 
==33147== For lists of detected and suppressed errors, rerun with: -s
==33147== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==33156== Memcheck, a memory error detector
==33156== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33156== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33156== Command: ./test -r xml "test_build_heap_3"
==33156== 
==33156== 
==33156== HEAP SUMMARY:
==33156==     in use at exit: 0 bytes in 0 blocks
==33156==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==33156== 
==33156== All heap blocks were freed -- no leaks are possible
==33156== 
==33156== For lists of detected and suppressed errors, rerun with: -s
==33156== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==33161== Memcheck, a memory error detector
==33161== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33161== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33161== Command: ./test -r xml "test_build_heap_4"
==33161== 
==33161== 
==33161== HEAP SUMMARY:
==33161==     in use at exit: 0 bytes in 0 blocks
==33161==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==33161== 
==33161== All heap blocks were freed -- no leaks are possible
==33161== 
==33161== For lists of detected and suppressed errors, rerun with: -s
==33161== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==33164== Memcheck, a memory error detector
==33164== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33164== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33164== Command: ./test -r xml "test_build_heap_5"
==33164== 
==33164== 
==33164== HEAP SUMMARY:
==33164==     in use at exit: 0 bytes in 0 blocks
==33164==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==33164== 
==33164== All heap blocks were freed -- no leaks are possible
==33164== 
==33164== For lists of detected and suppressed errors, rerun with: -s
==33164== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==33169== Memcheck, a memory error detector
==33169== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33169== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33169== Command: ./test -r xml "test_update_elem_1"
==33169== 
==33169== 
==33169== HEAP SUMMARY:
==33169==     in use at exit: 0 bytes in 0 blocks
==33169==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==33169== 
==33169== All heap blocks were freed -- no leaks are possible
==33169== 
==33169== For lists of detected and suppressed errors, rerun with: -s
==33169== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==33194== Memcheck, a memory error detector
==33194== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33194== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33194== Command: ./test -r xml "test_update_elem_2"
==33194== 
==33194== 
==33194== HEAP SUMMARY:
==33194==     in use at exit: 0 bytes in 0 blocks
==33194==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==33194== 
==33194== All heap blocks were freed -- no leaks are possible
==33194== 
==33194== For lists of detected and suppressed errors, rerun with: -s
==33194== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==33222== Memcheck, a memory error detector
==33222== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33222== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33222== Command: ./test -r xml "test_update_elem_3"
==33222== 
==33222== 
==33222== HEAP SUMMARY:
==33222==     in use at exit: 0 bytes in 0 blocks
==33222==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==33222== 
==33222== All heap blocks were freed -- no leaks are possible
==33222== 
==33222== For lists of detected and suppressed errors, rerun with: -s
==33222== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==33229== Memcheck, a memory error detector
==33229== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33229== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33229== Command: ./test -r xml "test_update_elem_4"
==33229== 
==33229== 
==33229== HEAP SUMMARY:
==33229==     in use at exit: 0 bytes in 0 blocks
==33229==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==33229== 
==33229== All heap blocks were freed -- no leaks are possible
==33229== 
==33229== For lists of detected and suppressed errors, rerun with: -s
==33229== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==33252== Memcheck, a memory error detector
==33252== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==33252== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==33252== Command: ./test -r xml "test_update_elem_5"
==33252== 
==33252== 
==33252== HEAP SUMMARY:
==33252==     in use at exit: 0 bytes in 0 blocks
==33252==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==33252== 
==33252== All heap blocks were freed -- no leaks are possible
==33252== 
==33252== For lists of detected and suppressed errors, rerun with: -s
==33252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **08d96e83e4b1544506c6b4feb8096769ed385008** (from **May 6th 2020, 11:59:59 pm**)
