


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
==13418== Memcheck, a memory error detector
==13418== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13418== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13418== Command: ./test -r xml "DH::testRemoveEASY"
==13418== 
==13418== 
==13418== HEAP SUMMARY:
==13418==     in use at exit: 0 bytes in 0 blocks
==13418==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==13418== 
==13418== All heap blocks were freed -- no leaks are possible
==13418== 
==13418== For counts of detected and suppressed errors, rerun with: -v
==13418== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13431== Memcheck, a memory error detector
==13431== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13431== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13431== Command: ./test -r xml "DH::testRemoveHard"
==13431== 
==13431== 
==13431== HEAP SUMMARY:
==13431==     in use at exit: 0 bytes in 0 blocks
==13431==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==13431== 
==13431== All heap blocks were freed -- no leaks are possible
==13431== 
==13431== For counts of detected and suppressed errors, rerun with: -v
==13431== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13439== Memcheck, a memory error detector
==13439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13439== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13439== Command: ./test -r xml "DH::testResizeOnce"
==13439== 
==13439== 
==13439== HEAP SUMMARY:
==13439==     in use at exit: 0 bytes in 0 blocks
==13439==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==13439== 
==13439== All heap blocks were freed -- no leaks are possible
==13439== 
==13439== For counts of detected and suppressed errors, rerun with: -v
==13439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13448== Memcheck, a memory error detector
==13448== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13448== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13448== Command: ./test -r xml "DH::testResizeAll"
==13448== 
==13448== 
==13448== HEAP SUMMARY:
==13448==     in use at exit: 0 bytes in 0 blocks
==13448==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==13448== 
==13448== All heap blocks were freed -- no leaks are possible
==13448== 
==13448== For counts of detected and suppressed errors, rerun with: -v
==13448== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13456== Memcheck, a memory error detector
==13456== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13456== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13456== Command: ./test -r xml "DH::testInsertEasy"
==13456== 
==13456== 
==13456== HEAP SUMMARY:
==13456==     in use at exit: 0 bytes in 0 blocks
==13456==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==13456== 
==13456== All heap blocks were freed -- no leaks are possible
==13456== 
==13456== For counts of detected and suppressed errors, rerun with: -v
==13456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13460== Memcheck, a memory error detector
==13460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13460== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13460== Command: ./test -r xml "DH::testInsertHard"
==13460== 
==13460== 
==13460== HEAP SUMMARY:
==13460==     in use at exit: 0 bytes in 0 blocks
==13460==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==13460== 
==13460== All heap blocks were freed -- no leaks are possible
==13460== 
==13460== For counts of detected and suppressed errors, rerun with: -v
==13460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13463== Memcheck, a memory error detector
==13463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13463== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13463== Command: ./test -r xml "SC::testRemoveEASY"
==13463== 
==13463== 
==13463== HEAP SUMMARY:
==13463==     in use at exit: 0 bytes in 0 blocks
==13463==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==13463== 
==13463== All heap blocks were freed -- no leaks are possible
==13463== 
==13463== For counts of detected and suppressed errors, rerun with: -v
==13463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13471== Memcheck, a memory error detector
==13471== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13471== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13471== Command: ./test -r xml "SC::testRemoveHard"
==13471== 
==13471== 
==13471== HEAP SUMMARY:
==13471==     in use at exit: 0 bytes in 0 blocks
==13471==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==13471== 
==13471== All heap blocks were freed -- no leaks are possible
==13471== 
==13471== For counts of detected and suppressed errors, rerun with: -v
==13471== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13480== Memcheck, a memory error detector
==13480== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13480== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13480== Command: ./test -r xml "SC::testResizeOnce"
==13480== 
==13480== 
==13480== HEAP SUMMARY:
==13480==     in use at exit: 0 bytes in 0 blocks
==13480==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==13480== 
==13480== All heap blocks were freed -- no leaks are possible
==13480== 
==13480== For counts of detected and suppressed errors, rerun with: -v
==13480== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13483== Memcheck, a memory error detector
==13483== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13483== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13483== Command: ./test -r xml "SC::testResizeAll"
==13483== 
==13483== 
==13483== HEAP SUMMARY:
==13483==     in use at exit: 0 bytes in 0 blocks
==13483==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==13483== 
==13483== All heap blocks were freed -- no leaks are possible
==13483== 
==13483== For counts of detected and suppressed errors, rerun with: -v
==13483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13486== Memcheck, a memory error detector
==13486== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13486== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13486== Command: ./test -r xml "SC::testInsertEasy"
==13486== 
==13486== 
==13486== HEAP SUMMARY:
==13486==     in use at exit: 0 bytes in 0 blocks
==13486==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==13486== 
==13486== All heap blocks were freed -- no leaks are possible
==13486== 
==13486== For counts of detected and suppressed errors, rerun with: -v
==13486== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13490== Memcheck, a memory error detector
==13490== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13490== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13490== Command: ./test -r xml "SC::testInsertHard"
==13490== 
==13490== 
==13490== HEAP SUMMARY:
==13490==     in use at exit: 0 bytes in 0 blocks
==13490==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==13490== 
==13490== All heap blocks were freed -- no leaks are possible
==13490== 
==13490== For counts of detected and suppressed errors, rerun with: -v
==13490== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13493== Memcheck, a memory error detector
==13493== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13493== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13493== Command: ./test -r xml "LP::testRemoveEASY"
==13493== 
==13493== 
==13493== HEAP SUMMARY:
==13493==     in use at exit: 0 bytes in 0 blocks
==13493==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==13493== 
==13493== All heap blocks were freed -- no leaks are possible
==13493== 
==13493== For counts of detected and suppressed errors, rerun with: -v
==13493== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13497== Memcheck, a memory error detector
==13497== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13497== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13497== Command: ./test -r xml "LP::testRemoveHard"
==13497== 
==13497== 
==13497== HEAP SUMMARY:
==13497==     in use at exit: 0 bytes in 0 blocks
==13497==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==13497== 
==13497== All heap blocks were freed -- no leaks are possible
==13497== 
==13497== For counts of detected and suppressed errors, rerun with: -v
==13497== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13503== Memcheck, a memory error detector
==13503== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13503== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13503== Command: ./test -r xml "LP::testResizeOnce"
==13503== 
==13503== 
==13503== HEAP SUMMARY:
==13503==     in use at exit: 0 bytes in 0 blocks
==13503==   total heap usage: 1,977 allocs, 1,977 frees, 245,293 bytes allocated
==13503== 
==13503== All heap blocks were freed -- no leaks are possible
==13503== 
==13503== For counts of detected and suppressed errors, rerun with: -v
==13503== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13512== Memcheck, a memory error detector
==13512== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13512== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13512== Command: ./test -r xml "LP::testResizeAll"
==13512== 
==13512== 
==13512== HEAP SUMMARY:
==13512==     in use at exit: 0 bytes in 0 blocks
==13512==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==13512== 
==13512== All heap blocks were freed -- no leaks are possible
==13512== 
==13512== For counts of detected and suppressed errors, rerun with: -v
==13512== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13515== Memcheck, a memory error detector
==13515== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13515== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13515== Command: ./test -r xml "LP::testInsertEasy"
==13515== 
==13515== 
==13515== HEAP SUMMARY:
==13515==     in use at exit: 0 bytes in 0 blocks
==13515==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==13515== 
==13515== All heap blocks were freed -- no leaks are possible
==13515== 
==13515== For counts of detected and suppressed errors, rerun with: -v
==13515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==13521== Memcheck, a memory error detector
==13521== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13521== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==13521== Command: ./test -r xml "LP::testInsertHard"
==13521== 
==13521== 
==13521== HEAP SUMMARY:
==13521==     in use at exit: 0 bytes in 0 blocks
==13521==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==13521== 
==13521== All heap blocks were freed -- no leaks are possible
==13521== 
==13521== For counts of detected and suppressed errors, rerun with: -v
==13521== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **713b337ff6f0831d8f9b425d01f3acda57dbe658** (from **April 6th 2020, 11:59:59 pm**)
