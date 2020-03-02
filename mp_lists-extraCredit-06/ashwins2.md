


## Score: 52/52 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==16683== Memcheck, a memory error detector
==16683== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16683== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16683== Command: ./test -r xml "List::insertFront\ size"
==16683== 
==16683== 
==16683== HEAP SUMMARY:
==16683==     in use at exit: 0 bytes in 0 blocks
==16683==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==16683== 
==16683== All heap blocks were freed -- no leaks are possible
==16683== 
==16683== For counts of detected and suppressed errors, rerun with: -v
==16683== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16693== Memcheck, a memory error detector
==16693== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16693== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16693== Command: ./test -r xml "List::insertBack\ size"
==16693== 
==16693== 
==16693== HEAP SUMMARY:
==16693==     in use at exit: 0 bytes in 0 blocks
==16693==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==16693== 
==16693== All heap blocks were freed -- no leaks are possible
==16693== 
==16693== For counts of detected and suppressed errors, rerun with: -v
==16693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16698== Memcheck, a memory error detector
==16698== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16698== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16698== Command: ./test -r xml "List::insert\ contents"
==16698== 
==16698== 
==16698== HEAP SUMMARY:
==16698==     in use at exit: 0 bytes in 0 blocks
==16698==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==16698== 
==16698== All heap blocks were freed -- no leaks are possible
==16698== 
==16698== For counts of detected and suppressed errors, rerun with: -v
==16698== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16717== Memcheck, a memory error detector
==16717== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16717== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16717== Command: ./test -r xml "List::triplerotate\ basic"
==16717== 
==16717== 
==16717== HEAP SUMMARY:
==16717==     in use at exit: 0 bytes in 0 blocks
==16717==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==16717== 
==16717== All heap blocks were freed -- no leaks are possible
==16717== 
==16717== For counts of detected and suppressed errors, rerun with: -v
==16717== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16726== Memcheck, a memory error detector
==16726== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16726== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16726== Command: ./test -r xml "List::triplerotate\ simple"
==16726== 
==16726== 
==16726== HEAP SUMMARY:
==16726==     in use at exit: 0 bytes in 0 blocks
==16726==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==16726== 
==16726== All heap blocks were freed -- no leaks are possible
==16726== 
==16726== For counts of detected and suppressed errors, rerun with: -v
==16726== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16733== Memcheck, a memory error detector
==16733== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16733== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16733== Command: ./test -r xml "List::split\ simple"
==16733== 
==16733== 
==16733== HEAP SUMMARY:
==16733==     in use at exit: 0 bytes in 0 blocks
==16733==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==16733== 
==16733== All heap blocks were freed -- no leaks are possible
==16733== 
==16733== For counts of detected and suppressed errors, rerun with: -v
==16733== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16743== Memcheck, a memory error detector
==16743== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16743== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16743== Command: ./test -r xml "List::_destroy\ empty\ list"
==16743== 
==16743== 
==16743== HEAP SUMMARY:
==16743==     in use at exit: 0 bytes in 0 blocks
==16743==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==16743== 
==16743== All heap blocks were freed -- no leaks are possible
==16743== 
==16743== For counts of detected and suppressed errors, rerun with: -v
==16743== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16754== Memcheck, a memory error detector
==16754== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16754== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16754== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==16754== 
==16754== 
==16754== HEAP SUMMARY:
==16754==     in use at exit: 0 bytes in 0 blocks
==16754==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==16754== 
==16754== All heap blocks were freed -- no leaks are possible
==16754== 
==16754== For counts of detected and suppressed errors, rerun with: -v
==16754== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16766== Memcheck, a memory error detector
==16766== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16766== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16766== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==16766== 
==16766== 
==16766== HEAP SUMMARY:
==16766==     in use at exit: 0 bytes in 0 blocks
==16766==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==16766== 
==16766== All heap blocks were freed -- no leaks are possible
==16766== 
==16766== For counts of detected and suppressed errors, rerun with: -v
==16766== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16775== Memcheck, a memory error detector
==16775== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16775== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16775== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==16775== 
==16775== 
==16775== HEAP SUMMARY:
==16775==     in use at exit: 0 bytes in 0 blocks
==16775==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==16775== 
==16775== All heap blocks were freed -- no leaks are possible
==16775== 
==16775== For counts of detected and suppressed errors, rerun with: -v
==16775== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16780== Memcheck, a memory error detector
==16780== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16780== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16780== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==16780== 
==16780== 
==16780== HEAP SUMMARY:
==16780==     in use at exit: 0 bytes in 0 blocks
==16780==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==16780== 
==16780== All heap blocks were freed -- no leaks are possible
==16780== 
==16780== For counts of detected and suppressed errors, rerun with: -v
==16780== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16787== Memcheck, a memory error detector
==16787== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16787== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16787== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==16787== 
==16787== 
==16787== HEAP SUMMARY:
==16787==     in use at exit: 0 bytes in 0 blocks
==16787==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==16787== 
==16787== All heap blocks were freed -- no leaks are possible
==16787== 
==16787== For counts of detected and suppressed errors, rerun with: -v
==16787== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16795== Memcheck, a memory error detector
==16795== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16795== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16795== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==16795== 
==16795== 
==16795== HEAP SUMMARY:
==16795==     in use at exit: 0 bytes in 0 blocks
==16795==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==16795== 
==16795== All heap blocks were freed -- no leaks are possible
==16795== 
==16795== For counts of detected and suppressed errors, rerun with: -v
==16795== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16800== Memcheck, a memory error detector
==16800== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16800== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16800== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==16800== 
==16800== 
==16800== HEAP SUMMARY:
==16800==     in use at exit: 0 bytes in 0 blocks
==16800==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==16800== 
==16800== All heap blocks were freed -- no leaks are possible
==16800== 
==16800== For counts of detected and suppressed errors, rerun with: -v
==16800== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16808== Memcheck, a memory error detector
==16808== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16808== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16808== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==16808== 
==16808== 
==16808== HEAP SUMMARY:
==16808==     in use at exit: 0 bytes in 0 blocks
==16808==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==16808== 
==16808== All heap blocks were freed -- no leaks are possible
==16808== 
==16808== For counts of detected and suppressed errors, rerun with: -v
==16808== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==16819== Memcheck, a memory error detector
==16819== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16819== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16819== Command: ./test -r xml "List::insert\ contents\ #2"
==16819== 
==16819== 
==16819== HEAP SUMMARY:
==16819==     in use at exit: 0 bytes in 0 blocks
==16819==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==16819== 
==16819== All heap blocks were freed -- no leaks are possible
==16819== 
==16819== For counts of detected and suppressed errors, rerun with: -v
==16819== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==16867== Memcheck, a memory error detector
==16867== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16867== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==16867== Command: ./test -r xml "List::split\ edge\ cases"
==16867== 
==16867== 
==16867== HEAP SUMMARY:
==16867==     in use at exit: 0 bytes in 0 blocks
==16867==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==16867== 
==16867== All heap blocks were freed -- no leaks are possible
==16867== 
==16867== For counts of detected and suppressed errors, rerun with: -v
==16867== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **6e77871c88b2e4a0cca3957c18696e7b11f0a9aa** (from **February 29th 2020, 11:59:59 pm**)
