


## Score: 47/52 (90.38%)


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
==45210== Memcheck, a memory error detector
==45210== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45210== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45210== Command: ./test -r xml "List::insertFront\ size"
==45210== 
==45210== 
==45210== HEAP SUMMARY:
==45210==     in use at exit: 0 bytes in 0 blocks
==45210==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==45210== 
==45210== All heap blocks were freed -- no leaks are possible
==45210== 
==45210== For counts of detected and suppressed errors, rerun with: -v
==45210== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45217== Memcheck, a memory error detector
==45217== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45217== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45217== Command: ./test -r xml "List::insertBack\ size"
==45217== 
==45217== 
==45217== HEAP SUMMARY:
==45217==     in use at exit: 0 bytes in 0 blocks
==45217==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==45217== 
==45217== All heap blocks were freed -- no leaks are possible
==45217== 
==45217== For counts of detected and suppressed errors, rerun with: -v
==45217== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45230== Memcheck, a memory error detector
==45230== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45230== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45230== Command: ./test -r xml "List::insert\ contents"
==45230== 
==45230== 
==45230== HEAP SUMMARY:
==45230==     in use at exit: 0 bytes in 0 blocks
==45230==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==45230== 
==45230== All heap blocks were freed -- no leaks are possible
==45230== 
==45230== For counts of detected and suppressed errors, rerun with: -v
==45230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45237== Memcheck, a memory error detector
==45237== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45237== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45237== Command: ./test -r xml "List::triplerotate\ basic"
==45237== 
==45237== 
==45237== HEAP SUMMARY:
==45237==     in use at exit: 0 bytes in 0 blocks
==45237==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==45237== 
==45237== All heap blocks were freed -- no leaks are possible
==45237== 
==45237== For counts of detected and suppressed errors, rerun with: -v
==45237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45244== Memcheck, a memory error detector
==45244== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45244== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45244== Command: ./test -r xml "List::triplerotate\ simple"
==45244== 
==45244== 
==45244== HEAP SUMMARY:
==45244==     in use at exit: 0 bytes in 0 blocks
==45244==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==45244== 
==45244== All heap blocks were freed -- no leaks are possible
==45244== 
==45244== For counts of detected and suppressed errors, rerun with: -v
==45244== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45269== Memcheck, a memory error detector
==45269== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45269== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45269== Command: ./test -r xml "List::split\ simple"
==45269== 
==45269== 
==45269== HEAP SUMMARY:
==45269==     in use at exit: 0 bytes in 0 blocks
==45269==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==45269== 
==45269== All heap blocks were freed -- no leaks are possible
==45269== 
==45269== For counts of detected and suppressed errors, rerun with: -v
==45269== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45305== Memcheck, a memory error detector
==45305== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45305== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45305== Command: ./test -r xml "List::_destroy\ empty\ list"
==45305== 
==45305== 
==45305== HEAP SUMMARY:
==45305==     in use at exit: 0 bytes in 0 blocks
==45305==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==45305== 
==45305== All heap blocks were freed -- no leaks are possible
==45305== 
==45305== For counts of detected and suppressed errors, rerun with: -v
==45305== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45315== Memcheck, a memory error detector
==45315== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45315== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45315== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==45315== 
==45315== 
==45315== HEAP SUMMARY:
==45315==     in use at exit: 0 bytes in 0 blocks
==45315==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==45315== 
==45315== All heap blocks were freed -- no leaks are possible
==45315== 
==45315== For counts of detected and suppressed errors, rerun with: -v
==45315== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45329== Memcheck, a memory error detector
==45329== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45329== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45329== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==45329== 
==45329== 
==45329== HEAP SUMMARY:
==45329==     in use at exit: 0 bytes in 0 blocks
==45329==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==45329== 
==45329== All heap blocks were freed -- no leaks are possible
==45329== 
==45329== For counts of detected and suppressed errors, rerun with: -v
==45329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45339== Memcheck, a memory error detector
==45339== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45339== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45339== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==45339== 
==45339== 
==45339== HEAP SUMMARY:
==45339==     in use at exit: 0 bytes in 0 blocks
==45339==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==45339== 
==45339== All heap blocks were freed -- no leaks are possible
==45339== 
==45339== For counts of detected and suppressed errors, rerun with: -v
==45339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45351== Memcheck, a memory error detector
==45351== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45351== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45351== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==45351== 
==45351== 
==45351== HEAP SUMMARY:
==45351==     in use at exit: 0 bytes in 0 blocks
==45351==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==45351== 
==45351== All heap blocks were freed -- no leaks are possible
==45351== 
==45351== For counts of detected and suppressed errors, rerun with: -v
==45351== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45362== Memcheck, a memory error detector
==45362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45362== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45362== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==45362== 
==45362== 
==45362== HEAP SUMMARY:
==45362==     in use at exit: 0 bytes in 0 blocks
==45362==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==45362== 
==45362== All heap blocks were freed -- no leaks are possible
==45362== 
==45362== For counts of detected and suppressed errors, rerun with: -v
==45362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45371== Memcheck, a memory error detector
==45371== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45371== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45371== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==45371== 
==45371== 
==45371== HEAP SUMMARY:
==45371==     in use at exit: 0 bytes in 0 blocks
==45371==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==45371== 
==45371== All heap blocks were freed -- no leaks are possible
==45371== 
==45371== For counts of detected and suppressed errors, rerun with: -v
==45371== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45382== Memcheck, a memory error detector
==45382== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45382== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45382== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==45382== 
==45382== 
==45382== HEAP SUMMARY:
==45382==     in use at exit: 0 bytes in 0 blocks
==45382==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==45382== 
==45382== All heap blocks were freed -- no leaks are possible
==45382== 
==45382== For counts of detected and suppressed errors, rerun with: -v
==45382== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45419== Memcheck, a memory error detector
==45419== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45419== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45419== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==45419== 
==45419== 
==45419== HEAP SUMMARY:
==45419==     in use at exit: 0 bytes in 0 blocks
==45419==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==45419== 
==45419== All heap blocks were freed -- no leaks are possible
==45419== 
==45419== For counts of detected and suppressed errors, rerun with: -v
==45419== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==45430== Memcheck, a memory error detector
==45430== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==45430== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==45430== Command: ./test -r xml "List::insert\ contents\ #2"
==45430== 
==45430== 
==45430== HEAP SUMMARY:
==45430==     in use at exit: 0 bytes in 0 blocks
==45430==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==45430== 
==45430== All heap blocks were freed -- no leaks are possible
==45430== 
==45430== For counts of detected and suppressed errors, rerun with: -v
==45430== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **de1f74396f9fb6cbf60613025d40f7e164369fb6** (from **February 24th 2020, 11:59:59 pm**)
