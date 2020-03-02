


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
==19129== Memcheck, a memory error detector
==19129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19129== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19129== Command: ./test -r xml "List::insertFront\ size"
==19129== 
==19129== 
==19129== HEAP SUMMARY:
==19129==     in use at exit: 0 bytes in 0 blocks
==19129==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==19129== 
==19129== All heap blocks were freed -- no leaks are possible
==19129== 
==19129== For counts of detected and suppressed errors, rerun with: -v
==19129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19135== Memcheck, a memory error detector
==19135== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19135== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19135== Command: ./test -r xml "List::insertBack\ size"
==19135== 
==19135== 
==19135== HEAP SUMMARY:
==19135==     in use at exit: 0 bytes in 0 blocks
==19135==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==19135== 
==19135== All heap blocks were freed -- no leaks are possible
==19135== 
==19135== For counts of detected and suppressed errors, rerun with: -v
==19135== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19176== Memcheck, a memory error detector
==19176== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19176== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19176== Command: ./test -r xml "List::insert\ contents"
==19176== 
==19176== 
==19176== HEAP SUMMARY:
==19176==     in use at exit: 0 bytes in 0 blocks
==19176==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==19176== 
==19176== All heap blocks were freed -- no leaks are possible
==19176== 
==19176== For counts of detected and suppressed errors, rerun with: -v
==19176== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19181== Memcheck, a memory error detector
==19181== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19181== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19181== Command: ./test -r xml "List::triplerotate\ basic"
==19181== 
==19181== 
==19181== HEAP SUMMARY:
==19181==     in use at exit: 0 bytes in 0 blocks
==19181==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==19181== 
==19181== All heap blocks were freed -- no leaks are possible
==19181== 
==19181== For counts of detected and suppressed errors, rerun with: -v
==19181== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19196== Memcheck, a memory error detector
==19196== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19196== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19196== Command: ./test -r xml "List::triplerotate\ simple"
==19196== 
==19196== 
==19196== HEAP SUMMARY:
==19196==     in use at exit: 0 bytes in 0 blocks
==19196==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==19196== 
==19196== All heap blocks were freed -- no leaks are possible
==19196== 
==19196== For counts of detected and suppressed errors, rerun with: -v
==19196== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19207== Memcheck, a memory error detector
==19207== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19207== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19207== Command: ./test -r xml "List::split\ simple"
==19207== 
==19207== 
==19207== HEAP SUMMARY:
==19207==     in use at exit: 0 bytes in 0 blocks
==19207==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==19207== 
==19207== All heap blocks were freed -- no leaks are possible
==19207== 
==19207== For counts of detected and suppressed errors, rerun with: -v
==19207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19218== Memcheck, a memory error detector
==19218== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19218== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19218== Command: ./test -r xml "List::_destroy\ empty\ list"
==19218== 
==19218== 
==19218== HEAP SUMMARY:
==19218==     in use at exit: 0 bytes in 0 blocks
==19218==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==19218== 
==19218== All heap blocks were freed -- no leaks are possible
==19218== 
==19218== For counts of detected and suppressed errors, rerun with: -v
==19218== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19223== Memcheck, a memory error detector
==19223== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19223== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19223== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==19223== 
==19223== 
==19223== HEAP SUMMARY:
==19223==     in use at exit: 0 bytes in 0 blocks
==19223==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==19223== 
==19223== All heap blocks were freed -- no leaks are possible
==19223== 
==19223== For counts of detected and suppressed errors, rerun with: -v
==19223== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19233== Memcheck, a memory error detector
==19233== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19233== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19233== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==19233== 
==19233== 
==19233== HEAP SUMMARY:
==19233==     in use at exit: 0 bytes in 0 blocks
==19233==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==19233== 
==19233== All heap blocks were freed -- no leaks are possible
==19233== 
==19233== For counts of detected and suppressed errors, rerun with: -v
==19233== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19278== Memcheck, a memory error detector
==19278== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19278== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19278== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==19278== 
==19278== 
==19278== HEAP SUMMARY:
==19278==     in use at exit: 0 bytes in 0 blocks
==19278==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==19278== 
==19278== All heap blocks were freed -- no leaks are possible
==19278== 
==19278== For counts of detected and suppressed errors, rerun with: -v
==19278== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19285== Memcheck, a memory error detector
==19285== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19285== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19285== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19285== 
==19285== 
==19285== HEAP SUMMARY:
==19285==     in use at exit: 0 bytes in 0 blocks
==19285==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==19285== 
==19285== All heap blocks were freed -- no leaks are possible
==19285== 
==19285== For counts of detected and suppressed errors, rerun with: -v
==19285== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19293== Memcheck, a memory error detector
==19293== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19293== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19293== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==19293== 
==19293== 
==19293== HEAP SUMMARY:
==19293==     in use at exit: 0 bytes in 0 blocks
==19293==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==19293== 
==19293== All heap blocks were freed -- no leaks are possible
==19293== 
==19293== For counts of detected and suppressed errors, rerun with: -v
==19293== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19301== Memcheck, a memory error detector
==19301== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19301== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19301== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==19301== 
==19301== 
==19301== HEAP SUMMARY:
==19301==     in use at exit: 0 bytes in 0 blocks
==19301==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==19301== 
==19301== All heap blocks were freed -- no leaks are possible
==19301== 
==19301== For counts of detected and suppressed errors, rerun with: -v
==19301== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19311== Memcheck, a memory error detector
==19311== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19311== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19311== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==19311== 
==19311== 
==19311== HEAP SUMMARY:
==19311==     in use at exit: 0 bytes in 0 blocks
==19311==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==19311== 
==19311== All heap blocks were freed -- no leaks are possible
==19311== 
==19311== For counts of detected and suppressed errors, rerun with: -v
==19311== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19317== Memcheck, a memory error detector
==19317== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19317== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19317== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==19317== 
==19317== 
==19317== HEAP SUMMARY:
==19317==     in use at exit: 0 bytes in 0 blocks
==19317==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==19317== 
==19317== All heap blocks were freed -- no leaks are possible
==19317== 
==19317== For counts of detected and suppressed errors, rerun with: -v
==19317== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19324== Memcheck, a memory error detector
==19324== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19324== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19324== Command: ./test -r xml "List::insert\ contents\ #2"
==19324== 
==19324== 
==19324== HEAP SUMMARY:
==19324==     in use at exit: 0 bytes in 0 blocks
==19324==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==19324== 
==19324== All heap blocks were freed -- no leaks are possible
==19324== 
==19324== For counts of detected and suppressed errors, rerun with: -v
==19324== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19329== Memcheck, a memory error detector
==19329== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19329== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==19329== Command: ./test -r xml "List::split\ edge\ cases"
==19329== 
==19329== 
==19329== HEAP SUMMARY:
==19329==     in use at exit: 0 bytes in 0 blocks
==19329==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==19329== 
==19329== All heap blocks were freed -- no leaks are possible
==19329== 
==19329== For counts of detected and suppressed errors, rerun with: -v
==19329== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **1f346dd6e36ffdd69b6b435b7210f6f40a62141a** (from **March 1st 2020, 11:59:59 pm**)
