


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
==1191== Memcheck, a memory error detector
==1191== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1191== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1191== Command: ./test -r xml "test_heapify_down_1"
==1191== 
==1191== 
==1191== HEAP SUMMARY:
==1191==     in use at exit: 0 bytes in 0 blocks
==1191==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==1191== 
==1191== All heap blocks were freed -- no leaks are possible
==1191== 
==1191== For counts of detected and suppressed errors, rerun with: -v
==1191== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1195== Memcheck, a memory error detector
==1195== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1195== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1195== Command: ./test -r xml "test_heapify_down_2"
==1195== 
==1195== 
==1195== HEAP SUMMARY:
==1195==     in use at exit: 0 bytes in 0 blocks
==1195==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==1195== 
==1195== All heap blocks were freed -- no leaks are possible
==1195== 
==1195== For counts of detected and suppressed errors, rerun with: -v
==1195== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1198== Memcheck, a memory error detector
==1198== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1198== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1198== Command: ./test -r xml "test_heapify_down_3"
==1198== 
==1198== 
==1198== HEAP SUMMARY:
==1198==     in use at exit: 0 bytes in 0 blocks
==1198==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==1198== 
==1198== All heap blocks were freed -- no leaks are possible
==1198== 
==1198== For counts of detected and suppressed errors, rerun with: -v
==1198== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1201== Memcheck, a memory error detector
==1201== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1201== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1201== Command: ./test -r xml "test_heapify_down_4"
==1201== 
==1201== 
==1201== HEAP SUMMARY:
==1201==     in use at exit: 0 bytes in 0 blocks
==1201==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==1201== 
==1201== All heap blocks were freed -- no leaks are possible
==1201== 
==1201== For counts of detected and suppressed errors, rerun with: -v
==1201== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1205== Memcheck, a memory error detector
==1205== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1205== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1205== Command: ./test -r xml "test_heapify_down_5"
==1205== 
==1205== 
==1205== HEAP SUMMARY:
==1205==     in use at exit: 0 bytes in 0 blocks
==1205==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==1205== 
==1205== All heap blocks were freed -- no leaks are possible
==1205== 
==1205== For counts of detected and suppressed errors, rerun with: -v
==1205== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1208== Memcheck, a memory error detector
==1208== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1208== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1208== Command: ./test -r xml "test_heapify_down_6"
==1208== 
==1208== 
==1208== HEAP SUMMARY:
==1208==     in use at exit: 0 bytes in 0 blocks
==1208==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==1208== 
==1208== All heap blocks were freed -- no leaks are possible
==1208== 
==1208== For counts of detected and suppressed errors, rerun with: -v
==1208== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1211== Memcheck, a memory error detector
==1211== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1211== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1211== Command: ./test -r xml "test_heapify_down_7"
==1211== 
==1211== 
==1211== HEAP SUMMARY:
==1211==     in use at exit: 0 bytes in 0 blocks
==1211==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==1211== 
==1211== All heap blocks were freed -- no leaks are possible
==1211== 
==1211== For counts of detected and suppressed errors, rerun with: -v
==1211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1215== Memcheck, a memory error detector
==1215== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1215== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1215== Command: ./test -r xml "test_heapify_down_8"
==1215== 
==1215== 
==1215== HEAP SUMMARY:
==1215==     in use at exit: 0 bytes in 0 blocks
==1215==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==1215== 
==1215== All heap blocks were freed -- no leaks are possible
==1215== 
==1215== For counts of detected and suppressed errors, rerun with: -v
==1215== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1218== Memcheck, a memory error detector
==1218== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1218== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1218== Command: ./test -r xml "test_heapify_down_9"
==1218== 
==1218== 
==1218== HEAP SUMMARY:
==1218==     in use at exit: 0 bytes in 0 blocks
==1218==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==1218== 
==1218== All heap blocks were freed -- no leaks are possible
==1218== 
==1218== For counts of detected and suppressed errors, rerun with: -v
==1218== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1221== Memcheck, a memory error detector
==1221== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1221== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1221== Command: ./test -r xml "test_heapify_down_10"
==1221== 
==1221== 
==1221== HEAP SUMMARY:
==1221==     in use at exit: 0 bytes in 0 blocks
==1221==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==1221== 
==1221== All heap blocks were freed -- no leaks are possible
==1221== 
==1221== For counts of detected and suppressed errors, rerun with: -v
==1221== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1231== Memcheck, a memory error detector
==1231== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1231== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1231== Command: ./test -r xml "test_build_heap_1"
==1231== 
==1231== 
==1231== HEAP SUMMARY:
==1231==     in use at exit: 0 bytes in 0 blocks
==1231==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==1231== 
==1231== All heap blocks were freed -- no leaks are possible
==1231== 
==1231== For counts of detected and suppressed errors, rerun with: -v
==1231== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1234== Memcheck, a memory error detector
==1234== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1234== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1234== Command: ./test -r xml "test_build_heap_2"
==1234== 
==1234== 
==1234== HEAP SUMMARY:
==1234==     in use at exit: 0 bytes in 0 blocks
==1234==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==1234== 
==1234== All heap blocks were freed -- no leaks are possible
==1234== 
==1234== For counts of detected and suppressed errors, rerun with: -v
==1234== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1237== Memcheck, a memory error detector
==1237== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1237== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1237== Command: ./test -r xml "test_build_heap_3"
==1237== 
==1237== 
==1237== HEAP SUMMARY:
==1237==     in use at exit: 0 bytes in 0 blocks
==1237==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==1237== 
==1237== All heap blocks were freed -- no leaks are possible
==1237== 
==1237== For counts of detected and suppressed errors, rerun with: -v
==1237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1240== Memcheck, a memory error detector
==1240== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1240== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1240== Command: ./test -r xml "test_build_heap_4"
==1240== 
==1240== 
==1240== HEAP SUMMARY:
==1240==     in use at exit: 0 bytes in 0 blocks
==1240==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==1240== 
==1240== All heap blocks were freed -- no leaks are possible
==1240== 
==1240== For counts of detected and suppressed errors, rerun with: -v
==1240== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1243== Memcheck, a memory error detector
==1243== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1243== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1243== Command: ./test -r xml "test_build_heap_5"
==1243== 
==1243== 
==1243== HEAP SUMMARY:
==1243==     in use at exit: 0 bytes in 0 blocks
==1243==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==1243== 
==1243== All heap blocks were freed -- no leaks are possible
==1243== 
==1243== For counts of detected and suppressed errors, rerun with: -v
==1243== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1246== Memcheck, a memory error detector
==1246== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1246== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1246== Command: ./test -r xml "test_update_elem_1"
==1246== 
==1246== 
==1246== HEAP SUMMARY:
==1246==     in use at exit: 0 bytes in 0 blocks
==1246==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==1246== 
==1246== All heap blocks were freed -- no leaks are possible
==1246== 
==1246== For counts of detected and suppressed errors, rerun with: -v
==1246== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1250== Memcheck, a memory error detector
==1250== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1250== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1250== Command: ./test -r xml "test_update_elem_2"
==1250== 
==1250== 
==1250== HEAP SUMMARY:
==1250==     in use at exit: 0 bytes in 0 blocks
==1250==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==1250== 
==1250== All heap blocks were freed -- no leaks are possible
==1250== 
==1250== For counts of detected and suppressed errors, rerun with: -v
==1250== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1253== Memcheck, a memory error detector
==1253== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1253== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1253== Command: ./test -r xml "test_update_elem_3"
==1253== 
==1253== 
==1253== HEAP SUMMARY:
==1253==     in use at exit: 0 bytes in 0 blocks
==1253==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==1253== 
==1253== All heap blocks were freed -- no leaks are possible
==1253== 
==1253== For counts of detected and suppressed errors, rerun with: -v
==1253== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1256== Memcheck, a memory error detector
==1256== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1256== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1256== Command: ./test -r xml "test_update_elem_4"
==1256== 
==1256== 
==1256== HEAP SUMMARY:
==1256==     in use at exit: 0 bytes in 0 blocks
==1256==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==1256== 
==1256== All heap blocks were freed -- no leaks are possible
==1256== 
==1256== For counts of detected and suppressed errors, rerun with: -v
==1256== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1259== Memcheck, a memory error detector
==1259== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1259== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1259== Command: ./test -r xml "test_update_elem_5"
==1259== 
==1259== 
==1259== HEAP SUMMARY:
==1259==     in use at exit: 0 bytes in 0 blocks
==1259==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==1259== 
==1259== All heap blocks were freed -- no leaks are possible
==1259== 
==1259== For counts of detected and suppressed errors, rerun with: -v
==1259== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **99dbebfe502b8f759d8f6ee1dd864aff5066702d** (from **April 13th 2020, 11:59:59 pm**)
