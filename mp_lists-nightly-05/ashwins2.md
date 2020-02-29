


## Score: 109/109 (100.00%)


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
==368== Memcheck, a memory error detector
==368== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==368== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==368== Command: ./test -r xml "List::merge"
==368== 
==368== 
==368== HEAP SUMMARY:
==368==     in use at exit: 0 bytes in 0 blocks
==368==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==368== 
==368== All heap blocks were freed -- no leaks are possible
==368== 
==368== For counts of detected and suppressed errors, rerun with: -v
==368== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==415== Memcheck, a memory error detector
==415== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==415== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==415== Command: ./test -r xml "List::sort\ simple\ #1"
==415== 
==415== 
==415== HEAP SUMMARY:
==415==     in use at exit: 0 bytes in 0 blocks
==415==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==415== 
==415== All heap blocks were freed -- no leaks are possible
==415== 
==415== For counts of detected and suppressed errors, rerun with: -v
==415== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==420== Memcheck, a memory error detector
==420== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==420== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==420== Command: ./test -r xml "List::sort\ simple\ #2"
==420== 
==420== 
==420== HEAP SUMMARY:
==420==     in use at exit: 0 bytes in 0 blocks
==420==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==420== 
==420== All heap blocks were freed -- no leaks are possible
==420== 
==420== For counts of detected and suppressed errors, rerun with: -v
==420== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==429== Memcheck, a memory error detector
==429== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==429== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==429== Command: ./test -r xml "List::insertFront\ size"
==429== 
==429== 
==429== HEAP SUMMARY:
==429==     in use at exit: 0 bytes in 0 blocks
==429==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==429== 
==429== All heap blocks were freed -- no leaks are possible
==429== 
==429== For counts of detected and suppressed errors, rerun with: -v
==429== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==433== Memcheck, a memory error detector
==433== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==433== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==433== Command: ./test -r xml "List::insertBack\ size"
==433== 
==433== 
==433== HEAP SUMMARY:
==433==     in use at exit: 0 bytes in 0 blocks
==433==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==433== 
==433== All heap blocks were freed -- no leaks are possible
==433== 
==433== For counts of detected and suppressed errors, rerun with: -v
==433== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==436== Memcheck, a memory error detector
==436== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==436== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==436== Command: ./test -r xml "List::insert\ contents"
==436== 
==436== 
==436== HEAP SUMMARY:
==436==     in use at exit: 0 bytes in 0 blocks
==436==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==436== 
==436== All heap blocks were freed -- no leaks are possible
==436== 
==436== For counts of detected and suppressed errors, rerun with: -v
==436== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==444== Memcheck, a memory error detector
==444== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==444== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==444== Command: ./test -r xml "List::triplerotate\ basic"
==444== 
==444== 
==444== HEAP SUMMARY:
==444==     in use at exit: 0 bytes in 0 blocks
==444==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==444== 
==444== All heap blocks were freed -- no leaks are possible
==444== 
==444== For counts of detected and suppressed errors, rerun with: -v
==444== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==449== Memcheck, a memory error detector
==449== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==449== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==449== Command: ./test -r xml "List::triplerotate\ simple"
==449== 
==449== 
==449== HEAP SUMMARY:
==449==     in use at exit: 0 bytes in 0 blocks
==449==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==449== 
==449== All heap blocks were freed -- no leaks are possible
==449== 
==449== For counts of detected and suppressed errors, rerun with: -v
==449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==473== Memcheck, a memory error detector
==473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==473== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==473== Command: ./test -r xml "List::split\ simple"
==473== 
==473== 
==473== HEAP SUMMARY:
==473==     in use at exit: 0 bytes in 0 blocks
==473==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==473== 
==473== All heap blocks were freed -- no leaks are possible
==473== 
==473== For counts of detected and suppressed errors, rerun with: -v
==473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==500== Memcheck, a memory error detector
==500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==500== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==500== Command: ./test -r xml "List::_destroy\ empty\ list"
==500== 
==500== 
==500== HEAP SUMMARY:
==500==     in use at exit: 0 bytes in 0 blocks
==500==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==500== 
==500== All heap blocks were freed -- no leaks are possible
==500== 
==500== For counts of detected and suppressed errors, rerun with: -v
==500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==529== Memcheck, a memory error detector
==529== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==529== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==529== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==529== 
==529== 
==529== HEAP SUMMARY:
==529==     in use at exit: 0 bytes in 0 blocks
==529==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==529== 
==529== All heap blocks were freed -- no leaks are possible
==529== 
==529== For counts of detected and suppressed errors, rerun with: -v
==529== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==534== Memcheck, a memory error detector
==534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==534== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==534== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==534== 
==534== 
==534== HEAP SUMMARY:
==534==     in use at exit: 0 bytes in 0 blocks
==534==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==534== 
==534== All heap blocks were freed -- no leaks are possible
==534== 
==534== For counts of detected and suppressed errors, rerun with: -v
==534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==543== Memcheck, a memory error detector
==543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==543== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==543== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==543== 
==543== 
==543== HEAP SUMMARY:
==543==     in use at exit: 0 bytes in 0 blocks
==543==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==543== 
==543== All heap blocks were freed -- no leaks are possible
==543== 
==543== For counts of detected and suppressed errors, rerun with: -v
==543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==548== Memcheck, a memory error detector
==548== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==548== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==548== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==548== 
==548== 
==548== HEAP SUMMARY:
==548==     in use at exit: 0 bytes in 0 blocks
==548==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==548== 
==548== All heap blocks were freed -- no leaks are possible
==548== 
==548== For counts of detected and suppressed errors, rerun with: -v
==548== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==553== Memcheck, a memory error detector
==553== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==553== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==553== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==553== 
==553== 
==553== HEAP SUMMARY:
==553==     in use at exit: 0 bytes in 0 blocks
==553==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==553== 
==553== All heap blocks were freed -- no leaks are possible
==553== 
==553== For counts of detected and suppressed errors, rerun with: -v
==553== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==557== Memcheck, a memory error detector
==557== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==557== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==557== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==557== 
==557== 
==557== HEAP SUMMARY:
==557==     in use at exit: 0 bytes in 0 blocks
==557==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==557== 
==557== All heap blocks were freed -- no leaks are possible
==557== 
==557== For counts of detected and suppressed errors, rerun with: -v
==557== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==560== Memcheck, a memory error detector
==560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==560== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==560== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==560== 
==560== 
==560== HEAP SUMMARY:
==560==     in use at exit: 0 bytes in 0 blocks
==560==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==560== 
==560== All heap blocks were freed -- no leaks are possible
==560== 
==560== For counts of detected and suppressed errors, rerun with: -v
==560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==563== Memcheck, a memory error detector
==563== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==563== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==563== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==563== 
==563== 
==563== HEAP SUMMARY:
==563==     in use at exit: 0 bytes in 0 blocks
==563==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==563== 
==563== All heap blocks were freed -- no leaks are possible
==563== 
==563== For counts of detected and suppressed errors, rerun with: -v
==563== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==566== Memcheck, a memory error detector
==566== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==566== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==566== Command: ./test -r xml "List::reverse\ simple"
==566== 
==566== 
==566== HEAP SUMMARY:
==566==     in use at exit: 0 bytes in 0 blocks
==566==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==566== 
==566== All heap blocks were freed -- no leaks are possible
==566== 
==566== For counts of detected and suppressed errors, rerun with: -v
==566== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==570== Memcheck, a memory error detector
==570== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==570== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==570== Command: ./test -r xml "List::reverse\ edge\ cases"
==570== 
==570== 
==570== HEAP SUMMARY:
==570==     in use at exit: 0 bytes in 0 blocks
==570==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==570== 
==570== All heap blocks were freed -- no leaks are possible
==570== 
==570== For counts of detected and suppressed errors, rerun with: -v
==570== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==573== Memcheck, a memory error detector
==573== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==573== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==573== Command: ./test -r xml "List::reverseNth\ #3"
==573== 
==573== 
==573== HEAP SUMMARY:
==573==     in use at exit: 0 bytes in 0 blocks
==573==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==573== 
==573== All heap blocks were freed -- no leaks are possible
==573== 
==573== For counts of detected and suppressed errors, rerun with: -v
==573== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==576== Memcheck, a memory error detector
==576== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==576== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==576== Command: ./test -r xml "List::merge\ #2"
==576== 
==576== 
==576== HEAP SUMMARY:
==576==     in use at exit: 0 bytes in 0 blocks
==576==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==576== 
==576== All heap blocks were freed -- no leaks are possible
==576== 
==576== For counts of detected and suppressed errors, rerun with: -v
==576== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==602== Memcheck, a memory error detector
==602== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==602== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==602== Command: ./test -r xml "List::sort\ simple\ #3"
==602== 
==602== 
==602== HEAP SUMMARY:
==602==     in use at exit: 0 bytes in 0 blocks
==602==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==602== 
==602== All heap blocks were freed -- no leaks are possible
==602== 
==602== For counts of detected and suppressed errors, rerun with: -v
==602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==613== Memcheck, a memory error detector
==613== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==613== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==613== Command: ./test -r xml "List::insert\ contents\ #2"
==613== 
==613== 
==613== HEAP SUMMARY:
==613==     in use at exit: 0 bytes in 0 blocks
==613==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==613== 
==613== All heap blocks were freed -- no leaks are possible
==613== 
==613== For counts of detected and suppressed errors, rerun with: -v
==613== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==637== Memcheck, a memory error detector
==637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==637== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==637== Command: ./test -r xml "List::split\ edge\ cases"
==637== 
==637== 
==637== HEAP SUMMARY:
==637==     in use at exit: 0 bytes in 0 blocks
==637==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==637== 
==637== All heap blocks were freed -- no leaks are possible
==637== 
==637== For counts of detected and suppressed errors, rerun with: -v
==637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **9417b85f69439bab28d373927d3b6656269eecb2** (from **February 28th 2020, 11:59:59 pm**)
