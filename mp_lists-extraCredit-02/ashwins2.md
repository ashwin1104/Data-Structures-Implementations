


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
==17234== Memcheck, a memory error detector
==17234== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17234== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17234== Command: ./test -r xml "List::insertFront\ size"
==17234== 
==17234== 
==17234== HEAP SUMMARY:
==17234==     in use at exit: 0 bytes in 0 blocks
==17234==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==17234== 
==17234== All heap blocks were freed -- no leaks are possible
==17234== 
==17234== For counts of detected and suppressed errors, rerun with: -v
==17234== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17240== Memcheck, a memory error detector
==17240== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17240== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17240== Command: ./test -r xml "List::insertBack\ size"
==17240== 
==17240== 
==17240== HEAP SUMMARY:
==17240==     in use at exit: 0 bytes in 0 blocks
==17240==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==17240== 
==17240== All heap blocks were freed -- no leaks are possible
==17240== 
==17240== For counts of detected and suppressed errors, rerun with: -v
==17240== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17252== Memcheck, a memory error detector
==17252== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17252== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17252== Command: ./test -r xml "List::insert\ contents"
==17252== 
==17252== 
==17252== HEAP SUMMARY:
==17252==     in use at exit: 0 bytes in 0 blocks
==17252==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==17252== 
==17252== All heap blocks were freed -- no leaks are possible
==17252== 
==17252== For counts of detected and suppressed errors, rerun with: -v
==17252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17261== Memcheck, a memory error detector
==17261== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17261== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17261== Command: ./test -r xml "List::triplerotate\ basic"
==17261== 
==17261== 
==17261== HEAP SUMMARY:
==17261==     in use at exit: 0 bytes in 0 blocks
==17261==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==17261== 
==17261== All heap blocks were freed -- no leaks are possible
==17261== 
==17261== For counts of detected and suppressed errors, rerun with: -v
==17261== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17308== Memcheck, a memory error detector
==17308== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17308== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17308== Command: ./test -r xml "List::triplerotate\ simple"
==17308== 
==17308== 
==17308== HEAP SUMMARY:
==17308==     in use at exit: 0 bytes in 0 blocks
==17308==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==17308== 
==17308== All heap blocks were freed -- no leaks are possible
==17308== 
==17308== For counts of detected and suppressed errors, rerun with: -v
==17308== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17321== Memcheck, a memory error detector
==17321== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17321== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17321== Command: ./test -r xml "List::split\ simple"
==17321== 
==17321== 
==17321== HEAP SUMMARY:
==17321==     in use at exit: 0 bytes in 0 blocks
==17321==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==17321== 
==17321== All heap blocks were freed -- no leaks are possible
==17321== 
==17321== For counts of detected and suppressed errors, rerun with: -v
==17321== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17360== Memcheck, a memory error detector
==17360== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17360== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17360== Command: ./test -r xml "List::_destroy\ empty\ list"
==17360== 
==17360== 
==17360== HEAP SUMMARY:
==17360==     in use at exit: 0 bytes in 0 blocks
==17360==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==17360== 
==17360== All heap blocks were freed -- no leaks are possible
==17360== 
==17360== For counts of detected and suppressed errors, rerun with: -v
==17360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17394== Memcheck, a memory error detector
==17394== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17394== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17394== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==17394== 
==17394== 
==17394== HEAP SUMMARY:
==17394==     in use at exit: 0 bytes in 0 blocks
==17394==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==17394== 
==17394== All heap blocks were freed -- no leaks are possible
==17394== 
==17394== For counts of detected and suppressed errors, rerun with: -v
==17394== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17408== Memcheck, a memory error detector
==17408== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17408== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17408== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==17408== 
==17408== 
==17408== HEAP SUMMARY:
==17408==     in use at exit: 0 bytes in 0 blocks
==17408==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==17408== 
==17408== All heap blocks were freed -- no leaks are possible
==17408== 
==17408== For counts of detected and suppressed errors, rerun with: -v
==17408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17419== Memcheck, a memory error detector
==17419== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17419== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17419== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==17419== 
==17419== 
==17419== HEAP SUMMARY:
==17419==     in use at exit: 0 bytes in 0 blocks
==17419==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==17419== 
==17419== All heap blocks were freed -- no leaks are possible
==17419== 
==17419== For counts of detected and suppressed errors, rerun with: -v
==17419== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17430== Memcheck, a memory error detector
==17430== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17430== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17430== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17430== 
==17430== 
==17430== HEAP SUMMARY:
==17430==     in use at exit: 0 bytes in 0 blocks
==17430==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==17430== 
==17430== All heap blocks were freed -- no leaks are possible
==17430== 
==17430== For counts of detected and suppressed errors, rerun with: -v
==17430== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17449== Memcheck, a memory error detector
==17449== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17449== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17449== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==17449== 
==17449== 
==17449== HEAP SUMMARY:
==17449==     in use at exit: 0 bytes in 0 blocks
==17449==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==17449== 
==17449== All heap blocks were freed -- no leaks are possible
==17449== 
==17449== For counts of detected and suppressed errors, rerun with: -v
==17449== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17461== Memcheck, a memory error detector
==17461== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17461== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17461== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==17461== 
==17461== 
==17461== HEAP SUMMARY:
==17461==     in use at exit: 0 bytes in 0 blocks
==17461==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==17461== 
==17461== All heap blocks were freed -- no leaks are possible
==17461== 
==17461== For counts of detected and suppressed errors, rerun with: -v
==17461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17500== Memcheck, a memory error detector
==17500== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17500== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17500== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==17500== 
==17500== 
==17500== HEAP SUMMARY:
==17500==     in use at exit: 0 bytes in 0 blocks
==17500==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==17500== 
==17500== All heap blocks were freed -- no leaks are possible
==17500== 
==17500== For counts of detected and suppressed errors, rerun with: -v
==17500== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17511== Memcheck, a memory error detector
==17511== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17511== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17511== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==17511== 
==17511== 
==17511== HEAP SUMMARY:
==17511==     in use at exit: 0 bytes in 0 blocks
==17511==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==17511== 
==17511== All heap blocks were freed -- no leaks are possible
==17511== 
==17511== For counts of detected and suppressed errors, rerun with: -v
==17511== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==17568== Memcheck, a memory error detector
==17568== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==17568== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==17568== Command: ./test -r xml "List::insert\ contents\ #2"
==17568== 
==17568== 
==17568== HEAP SUMMARY:
==17568==     in use at exit: 0 bytes in 0 blocks
==17568==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==17568== 
==17568== All heap blocks were freed -- no leaks are possible
==17568== 
==17568== For counts of detected and suppressed errors, rerun with: -v
==17568== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **a7411480745b39be89aa0df9342d0563fece5650** (from **February 25th 2020, 11:59:59 pm**)
