


## Score: 104/109 (95.41%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==1170== Memcheck, a memory error detector
==1170== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1170== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1170== Command: ./test -r xml "List::merge"
==1170== 
==1170== 
==1170== HEAP SUMMARY:
==1170==     in use at exit: 0 bytes in 0 blocks
==1170==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==1170== 
==1170== All heap blocks were freed -- no leaks are possible
==1170== 
==1170== For counts of detected and suppressed errors, rerun with: -v
==1170== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==1239== Memcheck, a memory error detector
==1239== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1239== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1239== Command: ./test -r xml "List::sort\ simple\ #1"
==1239== 
==1239== 
==1239== HEAP SUMMARY:
==1239==     in use at exit: 0 bytes in 0 blocks
==1239==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==1239== 
==1239== All heap blocks were freed -- no leaks are possible
==1239== 
==1239== For counts of detected and suppressed errors, rerun with: -v
==1239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==1246== Memcheck, a memory error detector
==1246== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1246== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1246== Command: ./test -r xml "List::sort\ simple\ #2"
==1246== 
==1246== 
==1246== HEAP SUMMARY:
==1246==     in use at exit: 0 bytes in 0 blocks
==1246==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
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
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==1297== Memcheck, a memory error detector
==1297== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1297== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1297== Command: ./test -r xml "List::insertFront\ size"
==1297== 
==1297== 
==1297== HEAP SUMMARY:
==1297==     in use at exit: 0 bytes in 0 blocks
==1297==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==1297== 
==1297== All heap blocks were freed -- no leaks are possible
==1297== 
==1297== For counts of detected and suppressed errors, rerun with: -v
==1297== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==1304== Memcheck, a memory error detector
==1304== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1304== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1304== Command: ./test -r xml "List::insertBack\ size"
==1304== 
==1304== 
==1304== HEAP SUMMARY:
==1304==     in use at exit: 0 bytes in 0 blocks
==1304==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==1304== 
==1304== All heap blocks were freed -- no leaks are possible
==1304== 
==1304== For counts of detected and suppressed errors, rerun with: -v
==1304== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==1310== Memcheck, a memory error detector
==1310== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1310== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1310== Command: ./test -r xml "List::insert\ contents"
==1310== 
==1310== 
==1310== HEAP SUMMARY:
==1310==     in use at exit: 0 bytes in 0 blocks
==1310==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==1310== 
==1310== All heap blocks were freed -- no leaks are possible
==1310== 
==1310== For counts of detected and suppressed errors, rerun with: -v
==1310== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==1316== Memcheck, a memory error detector
==1316== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1316== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1316== Command: ./test -r xml "List::triplerotate\ basic"
==1316== 
==1316== 
==1316== HEAP SUMMARY:
==1316==     in use at exit: 0 bytes in 0 blocks
==1316==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==1316== 
==1316== All heap blocks were freed -- no leaks are possible
==1316== 
==1316== For counts of detected and suppressed errors, rerun with: -v
==1316== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate basic" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="52">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==1346== Memcheck, a memory error detector
==1346== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1346== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1346== Command: ./test -r xml "List::triplerotate\ simple"
==1346== 
==1346== 
==1346== HEAP SUMMARY:
==1346==     in use at exit: 0 bytes in 0 blocks
==1346==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==1346== 
==1346== All heap blocks were freed -- no leaks are possible
==1346== 
==1346== For counts of detected and suppressed errors, rerun with: -v
==1346== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate simple" tags="[part=1][valgrind][weight=10]" filename="tests/tests_part1.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==1353== Memcheck, a memory error detector
==1353== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1353== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1353== Command: ./test -r xml "List::split\ simple"
==1353== 
==1353== 
==1353== HEAP SUMMARY:
==1353==     in use at exit: 0 bytes in 0 blocks
==1353==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==1353== 
==1353== All heap blocks were freed -- no leaks are possible
==1353== 
==1353== For counts of detected and suppressed errors, rerun with: -v
==1353== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==1376== Memcheck, a memory error detector
==1376== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1376== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1376== Command: ./test -r xml "List::_destroy\ empty\ list"
==1376== 
==1376== 
==1376== HEAP SUMMARY:
==1376==     in use at exit: 0 bytes in 0 blocks
==1376==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==1376== 
==1376== All heap blocks were freed -- no leaks are possible
==1376== 
==1376== For counts of detected and suppressed errors, rerun with: -v
==1376== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="159">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==1392== Memcheck, a memory error detector
==1392== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1392== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1392== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==1392== 
==1392== 
==1392== HEAP SUMMARY:
==1392==     in use at exit: 0 bytes in 0 blocks
==1392==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==1392== 
==1392== All heap blocks were freed -- no leaks are possible
==1392== 
==1392== For counts of detected and suppressed errors, rerun with: -v
==1392== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="170">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==1398== Memcheck, a memory error detector
==1398== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1398== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1398== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==1398== 
==1398== 
==1398== HEAP SUMMARY:
==1398==     in use at exit: 0 bytes in 0 blocks
==1398==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==1398== 
==1398== All heap blocks were freed -- no leaks are possible
==1398== 
==1398== For counts of detected and suppressed errors, rerun with: -v
==1398== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="178">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==1403== Memcheck, a memory error detector
==1403== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1403== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1403== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==1403== 
==1403== 
==1403== HEAP SUMMARY:
==1403==     in use at exit: 0 bytes in 0 blocks
==1403==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==1403== 
==1403== All heap blocks were freed -- no leaks are possible
==1403== 
==1403== For counts of detected and suppressed errors, rerun with: -v
==1403== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="187">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==1412== Memcheck, a memory error detector
==1412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1412== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1412== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1412== 
==1412== 
==1412== HEAP SUMMARY:
==1412==     in use at exit: 0 bytes in 0 blocks
==1412==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==1412== 
==1412== All heap blocks were freed -- no leaks are possible
==1412== 
==1412== For counts of detected and suppressed errors, rerun with: -v
==1412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="197">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==1417== Memcheck, a memory error detector
==1417== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1417== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1417== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==1417== 
==1417== 
==1417== HEAP SUMMARY:
==1417==     in use at exit: 0 bytes in 0 blocks
==1417==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==1417== 
==1417== All heap blocks were freed -- no leaks are possible
==1417== 
==1417== For counts of detected and suppressed errors, rerun with: -v
==1417== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="207">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==1423== Memcheck, a memory error detector
==1423== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1423== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1423== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1423== 
==1423== 
==1423== HEAP SUMMARY:
==1423==     in use at exit: 0 bytes in 0 blocks
==1423==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==1423== 
==1423== All heap blocks were freed -- no leaks are possible
==1423== 
==1423== For counts of detected and suppressed errors, rerun with: -v
==1423== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="219">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==1474== Memcheck, a memory error detector
==1474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1474== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1474== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1474== 
==1474== 
==1474== HEAP SUMMARY:
==1474==     in use at exit: 0 bytes in 0 blocks
==1474==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==1474== 
==1474== All heap blocks were freed -- no leaks are possible
==1474== 
==1474== For counts of detected and suppressed errors, rerun with: -v
==1474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==1483== Memcheck, a memory error detector
==1483== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1483== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1483== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1483== 
==1483== 
==1483== HEAP SUMMARY:
==1483==     in use at exit: 0 bytes in 0 blocks
==1483==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==1483== 
==1483== All heap blocks were freed -- no leaks are possible
==1483== 
==1483== For counts of detected and suppressed errors, rerun with: -v
==1483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="246">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==1500== Memcheck, a memory error detector
==1500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1500== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1500== Command: ./test -r xml "List::reverse\ simple"
==1500== 
==1500== 
==1500== HEAP SUMMARY:
==1500==     in use at exit: 0 bytes in 0 blocks
==1500==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==1500== 
==1500== All heap blocks were freed -- no leaks are possible
==1500== 
==1500== For counts of detected and suppressed errors, rerun with: -v
==1500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==1539== Memcheck, a memory error detector
==1539== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1539== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1539== Command: ./test -r xml "List::reverse\ edge\ cases"
==1539== 
==1539== 
==1539== HEAP SUMMARY:
==1539==     in use at exit: 0 bytes in 0 blocks
==1539==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==1539== 
==1539== All heap blocks were freed -- no leaks are possible
==1539== 
==1539== For counts of detected and suppressed errors, rerun with: -v
==1539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==1558== Memcheck, a memory error detector
==1558== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1558== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1558== Command: ./test -r xml "List::reverseNth\ #3"
==1558== 
==1558== 
==1558== HEAP SUMMARY:
==1558==     in use at exit: 0 bytes in 0 blocks
==1558==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==1558== 
==1558== All heap blocks were freed -- no leaks are possible
==1558== 
==1558== For counts of detected and suppressed errors, rerun with: -v
==1558== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==1589== Memcheck, a memory error detector
==1589== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1589== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1589== Command: ./test -r xml "List::merge\ #2"
==1589== 
==1589== 
==1589== HEAP SUMMARY:
==1589==     in use at exit: 0 bytes in 0 blocks
==1589==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==1589== 
==1589== All heap blocks were freed -- no leaks are possible
==1589== 
==1589== For counts of detected and suppressed errors, rerun with: -v
==1589== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==1645== Memcheck, a memory error detector
==1645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1645== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1645== Command: ./test -r xml "List::sort\ simple\ #3"
==1645== 
==1645== 
==1645== HEAP SUMMARY:
==1645==     in use at exit: 0 bytes in 0 blocks
==1645==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==1645== 
==1645== All heap blocks were freed -- no leaks are possible
==1645== 
==1645== For counts of detected and suppressed errors, rerun with: -v
==1645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==1698== Memcheck, a memory error detector
==1698== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1698== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==1698== Command: ./test -r xml "List::insert\ contents\ #2"
==1698== 
==1698== 
==1698== HEAP SUMMARY:
==1698==     in use at exit: 0 bytes in 0 blocks
==1698==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==1698== 
==1698== All heap blocks were freed -- no leaks are possible
==1698== 
==1698== For counts of detected and suppressed errors, rerun with: -v
==1698== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **aececee4d900bb7f86d760896cea2d3cde28be48** (from **February 26th 2020, 11:59:59 pm**)
