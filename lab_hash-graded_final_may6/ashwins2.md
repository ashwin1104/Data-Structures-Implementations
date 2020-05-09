


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==13631== Memcheck, a memory error detector
==13631== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13631== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13631== Command: ./test -r xml "DH::testRemoveEASY"
==13631== 
==13631== 
==13631== HEAP SUMMARY:
==13631==     in use at exit: 0 bytes in 0 blocks
==13631==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==13631== 
==13631== All heap blocks were freed -- no leaks are possible
==13631== 
==13631== For lists of detected and suppressed errors, rerun with: -s
==13631== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==13634== Memcheck, a memory error detector
==13634== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13634== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13634== Command: ./test -r xml "DH::testRemoveHard"
==13634== 
==13634== 
==13634== HEAP SUMMARY:
==13634==     in use at exit: 0 bytes in 0 blocks
==13634==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==13634== 
==13634== All heap blocks were freed -- no leaks are possible
==13634== 
==13634== For lists of detected and suppressed errors, rerun with: -s
==13634== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==13637== Memcheck, a memory error detector
==13637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13637== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13637== Command: ./test -r xml "DH::testResizeOnce"
==13637== 
==13637== 
==13637== HEAP SUMMARY:
==13637==     in use at exit: 0 bytes in 0 blocks
==13637==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==13637== 
==13637== All heap blocks were freed -- no leaks are possible
==13637== 
==13637== For lists of detected and suppressed errors, rerun with: -s
==13637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==13640== Memcheck, a memory error detector
==13640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13640== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13640== Command: ./test -r xml "DH::testResizeAll"
==13640== 
==13640== 
==13640== HEAP SUMMARY:
==13640==     in use at exit: 0 bytes in 0 blocks
==13640==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==13640== 
==13640== All heap blocks were freed -- no leaks are possible
==13640== 
==13640== For lists of detected and suppressed errors, rerun with: -s
==13640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==13643== Memcheck, a memory error detector
==13643== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13643== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13643== Command: ./test -r xml "DH::testInsertEasy"
==13643== 
==13643== 
==13643== HEAP SUMMARY:
==13643==     in use at exit: 0 bytes in 0 blocks
==13643==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==13643== 
==13643== All heap blocks were freed -- no leaks are possible
==13643== 
==13643== For lists of detected and suppressed errors, rerun with: -s
==13643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==13646== Memcheck, a memory error detector
==13646== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13646== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13646== Command: ./test -r xml "DH::testInsertHard"
==13646== 
==13646== 
==13646== HEAP SUMMARY:
==13646==     in use at exit: 0 bytes in 0 blocks
==13646==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==13646== 
==13646== All heap blocks were freed -- no leaks are possible
==13646== 
==13646== For lists of detected and suppressed errors, rerun with: -s
==13646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==13649== Memcheck, a memory error detector
==13649== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13649== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13649== Command: ./test -r xml "SC::testRemoveEASY"
==13649== 
==13649== 
==13649== HEAP SUMMARY:
==13649==     in use at exit: 0 bytes in 0 blocks
==13649==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==13649== 
==13649== All heap blocks were freed -- no leaks are possible
==13649== 
==13649== For lists of detected and suppressed errors, rerun with: -s
==13649== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==13652== Memcheck, a memory error detector
==13652== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13652== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13652== Command: ./test -r xml "SC::testRemoveHard"
==13652== 
==13652== 
==13652== HEAP SUMMARY:
==13652==     in use at exit: 0 bytes in 0 blocks
==13652==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==13652== 
==13652== All heap blocks were freed -- no leaks are possible
==13652== 
==13652== For lists of detected and suppressed errors, rerun with: -s
==13652== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==13655== Memcheck, a memory error detector
==13655== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13655== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13655== Command: ./test -r xml "SC::testResizeOnce"
==13655== 
==13655== 
==13655== HEAP SUMMARY:
==13655==     in use at exit: 0 bytes in 0 blocks
==13655==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==13655== 
==13655== All heap blocks were freed -- no leaks are possible
==13655== 
==13655== For lists of detected and suppressed errors, rerun with: -s
==13655== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==13660== Memcheck, a memory error detector
==13660== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13660== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13660== Command: ./test -r xml "SC::testResizeAll"
==13660== 
==13660== 
==13660== HEAP SUMMARY:
==13660==     in use at exit: 0 bytes in 0 blocks
==13660==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==13660== 
==13660== All heap blocks were freed -- no leaks are possible
==13660== 
==13660== For lists of detected and suppressed errors, rerun with: -s
==13660== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==13662== Memcheck, a memory error detector
==13662== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13662== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13662== Command: ./test -r xml "SC::testInsertEasy"
==13662== 
==13662== 
==13662== HEAP SUMMARY:
==13662==     in use at exit: 0 bytes in 0 blocks
==13662==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==13662== 
==13662== All heap blocks were freed -- no leaks are possible
==13662== 
==13662== For lists of detected and suppressed errors, rerun with: -s
==13662== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==13667== Memcheck, a memory error detector
==13667== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13667== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13667== Command: ./test -r xml "SC::testInsertHard"
==13667== 
==13667== 
==13667== HEAP SUMMARY:
==13667==     in use at exit: 0 bytes in 0 blocks
==13667==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==13667== 
==13667== All heap blocks were freed -- no leaks are possible
==13667== 
==13667== For lists of detected and suppressed errors, rerun with: -s
==13667== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==13670== Memcheck, a memory error detector
==13670== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13670== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13670== Command: ./test -r xml "LP::testRemoveEASY"
==13670== 
==13670== 
==13670== HEAP SUMMARY:
==13670==     in use at exit: 0 bytes in 0 blocks
==13670==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==13670== 
==13670== All heap blocks were freed -- no leaks are possible
==13670== 
==13670== For lists of detected and suppressed errors, rerun with: -s
==13670== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==13674== Memcheck, a memory error detector
==13674== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13674== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13674== Command: ./test -r xml "LP::testRemoveHard"
==13674== 
==13674== 
==13674== HEAP SUMMARY:
==13674==     in use at exit: 0 bytes in 0 blocks
==13674==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==13674== 
==13674== All heap blocks were freed -- no leaks are possible
==13674== 
==13674== For lists of detected and suppressed errors, rerun with: -s
==13674== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==13677== Memcheck, a memory error detector
==13677== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13677== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13677== Command: ./test -r xml "LP::testResizeOnce"
==13677== 
==13677== 
==13677== HEAP SUMMARY:
==13677==     in use at exit: 0 bytes in 0 blocks
==13677==   total heap usage: 1,977 allocs, 1,977 frees, 245,293 bytes allocated
==13677== 
==13677== All heap blocks were freed -- no leaks are possible
==13677== 
==13677== For lists of detected and suppressed errors, rerun with: -s
==13677== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==13680== Memcheck, a memory error detector
==13680== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13680== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13680== Command: ./test -r xml "LP::testResizeAll"
==13680== 
==13680== 
==13680== HEAP SUMMARY:
==13680==     in use at exit: 0 bytes in 0 blocks
==13680==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==13680== 
==13680== All heap blocks were freed -- no leaks are possible
==13680== 
==13680== For lists of detected and suppressed errors, rerun with: -s
==13680== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==13683== Memcheck, a memory error detector
==13683== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13683== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13683== Command: ./test -r xml "LP::testInsertEasy"
==13683== 
==13683== 
==13683== HEAP SUMMARY:
==13683==     in use at exit: 0 bytes in 0 blocks
==13683==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==13683== 
==13683== All heap blocks were freed -- no leaks are possible
==13683== 
==13683== For lists of detected and suppressed errors, rerun with: -s
==13683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==13686== Memcheck, a memory error detector
==13686== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13686== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==13686== Command: ./test -r xml "LP::testInsertHard"
==13686== 
==13686== 
==13686== HEAP SUMMARY:
==13686==     in use at exit: 0 bytes in 0 blocks
==13686==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==13686== 
==13686== All heap blocks were freed -- no leaks are possible
==13686== 
==13686== For lists of detected and suppressed errors, rerun with: -s
==13686== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **08d96e83e4b1544506c6b4feb8096769ed385008** (from **May 6th 2020, 11:59:59 pm**)
