


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
==32739== Memcheck, a memory error detector
==32739== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32739== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32739== Command: ./test -r xml "List::insertFront\ size"
==32739== 
==32739== 
==32739== HEAP SUMMARY:
==32739==     in use at exit: 0 bytes in 0 blocks
==32739==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==32739== 
==32739== All heap blocks were freed -- no leaks are possible
==32739== 
==32739== For counts of detected and suppressed errors, rerun with: -v
==32739== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32746== Memcheck, a memory error detector
==32746== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32746== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32746== Command: ./test -r xml "List::insertBack\ size"
==32746== 
==32746== 
==32746== HEAP SUMMARY:
==32746==     in use at exit: 0 bytes in 0 blocks
==32746==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==32746== 
==32746== All heap blocks were freed -- no leaks are possible
==32746== 
==32746== For counts of detected and suppressed errors, rerun with: -v
==32746== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32752== Memcheck, a memory error detector
==32752== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32752== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32752== Command: ./test -r xml "List::insert\ contents"
==32752== 
==32752== 
==32752== HEAP SUMMARY:
==32752==     in use at exit: 0 bytes in 0 blocks
==32752==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==32752== 
==32752== All heap blocks were freed -- no leaks are possible
==32752== 
==32752== For counts of detected and suppressed errors, rerun with: -v
==32752== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32757== Memcheck, a memory error detector
==32757== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32757== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32757== Command: ./test -r xml "List::triplerotate\ basic"
==32757== 
==32757== 
==32757== HEAP SUMMARY:
==32757==     in use at exit: 0 bytes in 0 blocks
==32757==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==32757== 
==32757== All heap blocks were freed -- no leaks are possible
==32757== 
==32757== For counts of detected and suppressed errors, rerun with: -v
==32757== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32762== Memcheck, a memory error detector
==32762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32762== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32762== Command: ./test -r xml "List::triplerotate\ simple"
==32762== 
==32762== 
==32762== HEAP SUMMARY:
==32762==     in use at exit: 0 bytes in 0 blocks
==32762==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==32762== 
==32762== All heap blocks were freed -- no leaks are possible
==32762== 
==32762== For counts of detected and suppressed errors, rerun with: -v
==32762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32768== Memcheck, a memory error detector
==32768== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32768== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32768== Command: ./test -r xml "List::split\ simple"
==32768== 
==32768== 
==32768== HEAP SUMMARY:
==32768==     in use at exit: 0 bytes in 0 blocks
==32768==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==32768== 
==32768== All heap blocks were freed -- no leaks are possible
==32768== 
==32768== For counts of detected and suppressed errors, rerun with: -v
==32768== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32775== Memcheck, a memory error detector
==32775== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32775== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32775== Command: ./test -r xml "List::_destroy\ empty\ list"
==32775== 
==32775== 
==32775== HEAP SUMMARY:
==32775==     in use at exit: 0 bytes in 0 blocks
==32775==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==32775== 
==32775== All heap blocks were freed -- no leaks are possible
==32775== 
==32775== For counts of detected and suppressed errors, rerun with: -v
==32775== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32778== Memcheck, a memory error detector
==32778== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32778== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32778== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==32778== 
==32778== 
==32778== HEAP SUMMARY:
==32778==     in use at exit: 0 bytes in 0 blocks
==32778==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==32778== 
==32778== All heap blocks were freed -- no leaks are possible
==32778== 
==32778== For counts of detected and suppressed errors, rerun with: -v
==32778== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32781== Memcheck, a memory error detector
==32781== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32781== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32781== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==32781== 
==32781== 
==32781== HEAP SUMMARY:
==32781==     in use at exit: 0 bytes in 0 blocks
==32781==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==32781== 
==32781== All heap blocks were freed -- no leaks are possible
==32781== 
==32781== For counts of detected and suppressed errors, rerun with: -v
==32781== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32784== Memcheck, a memory error detector
==32784== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32784== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32784== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==32784== 
==32784== 
==32784== HEAP SUMMARY:
==32784==     in use at exit: 0 bytes in 0 blocks
==32784==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==32784== 
==32784== All heap blocks were freed -- no leaks are possible
==32784== 
==32784== For counts of detected and suppressed errors, rerun with: -v
==32784== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32787== Memcheck, a memory error detector
==32787== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32787== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32787== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32787== 
==32787== 
==32787== HEAP SUMMARY:
==32787==     in use at exit: 0 bytes in 0 blocks
==32787==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==32787== 
==32787== All heap blocks were freed -- no leaks are possible
==32787== 
==32787== For counts of detected and suppressed errors, rerun with: -v
==32787== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32791== Memcheck, a memory error detector
==32791== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32791== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32791== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==32791== 
==32791== 
==32791== HEAP SUMMARY:
==32791==     in use at exit: 0 bytes in 0 blocks
==32791==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==32791== 
==32791== All heap blocks were freed -- no leaks are possible
==32791== 
==32791== For counts of detected and suppressed errors, rerun with: -v
==32791== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32794== Memcheck, a memory error detector
==32794== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32794== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32794== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==32794== 
==32794== 
==32794== HEAP SUMMARY:
==32794==     in use at exit: 0 bytes in 0 blocks
==32794==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==32794== 
==32794== All heap blocks were freed -- no leaks are possible
==32794== 
==32794== For counts of detected and suppressed errors, rerun with: -v
==32794== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32832== Memcheck, a memory error detector
==32832== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32832== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32832== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==32832== 
==32832== 
==32832== HEAP SUMMARY:
==32832==     in use at exit: 0 bytes in 0 blocks
==32832==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==32832== 
==32832== All heap blocks were freed -- no leaks are possible
==32832== 
==32832== For counts of detected and suppressed errors, rerun with: -v
==32832== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32837== Memcheck, a memory error detector
==32837== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32837== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32837== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==32837== 
==32837== 
==32837== HEAP SUMMARY:
==32837==     in use at exit: 0 bytes in 0 blocks
==32837==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==32837== 
==32837== All heap blocks were freed -- no leaks are possible
==32837== 
==32837== For counts of detected and suppressed errors, rerun with: -v
==32837== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32845== Memcheck, a memory error detector
==32845== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32845== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32845== Command: ./test -r xml "List::insert\ contents\ #2"
==32845== 
==32845== 
==32845== HEAP SUMMARY:
==32845==     in use at exit: 0 bytes in 0 blocks
==32845==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==32845== 
==32845== All heap blocks were freed -- no leaks are possible
==32845== 
==32845== For counts of detected and suppressed errors, rerun with: -v
==32845== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==32850== Memcheck, a memory error detector
==32850== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==32850== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==32850== Command: ./test -r xml "List::split\ edge\ cases"
==32850== 
==32850== 
==32850== HEAP SUMMARY:
==32850==     in use at exit: 0 bytes in 0 blocks
==32850==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==32850== 
==32850== All heap blocks were freed -- no leaks are possible
==32850== 
==32850== For counts of detected and suppressed errors, rerun with: -v
==32850== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
