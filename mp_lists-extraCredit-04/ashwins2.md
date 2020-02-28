


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
==25872== Memcheck, a memory error detector
==25872== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25872== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25872== Command: ./test -r xml "List::insertFront\ size"
==25872== 
==25872== 
==25872== HEAP SUMMARY:
==25872==     in use at exit: 0 bytes in 0 blocks
==25872==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25872== 
==25872== All heap blocks were freed -- no leaks are possible
==25872== 
==25872== For counts of detected and suppressed errors, rerun with: -v
==25872== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25877== Memcheck, a memory error detector
==25877== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25877== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25877== Command: ./test -r xml "List::insertBack\ size"
==25877== 
==25877== 
==25877== HEAP SUMMARY:
==25877==     in use at exit: 0 bytes in 0 blocks
==25877==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==25877== 
==25877== All heap blocks were freed -- no leaks are possible
==25877== 
==25877== For counts of detected and suppressed errors, rerun with: -v
==25877== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25888== Memcheck, a memory error detector
==25888== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25888== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25888== Command: ./test -r xml "List::insert\ contents"
==25888== 
==25888== 
==25888== HEAP SUMMARY:
==25888==     in use at exit: 0 bytes in 0 blocks
==25888==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==25888== 
==25888== All heap blocks were freed -- no leaks are possible
==25888== 
==25888== For counts of detected and suppressed errors, rerun with: -v
==25888== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25923== Memcheck, a memory error detector
==25923== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25923== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25923== Command: ./test -r xml "List::triplerotate\ basic"
==25923== 
==25923== 
==25923== HEAP SUMMARY:
==25923==     in use at exit: 0 bytes in 0 blocks
==25923==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==25923== 
==25923== All heap blocks were freed -- no leaks are possible
==25923== 
==25923== For counts of detected and suppressed errors, rerun with: -v
==25923== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25952== Memcheck, a memory error detector
==25952== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25952== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25952== Command: ./test -r xml "List::triplerotate\ simple"
==25952== 
==25952== 
==25952== HEAP SUMMARY:
==25952==     in use at exit: 0 bytes in 0 blocks
==25952==   total heap usage: 2,140 allocs, 2,140 frees, 252,688 bytes allocated
==25952== 
==25952== All heap blocks were freed -- no leaks are possible
==25952== 
==25952== For counts of detected and suppressed errors, rerun with: -v
==25952== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25960== Memcheck, a memory error detector
==25960== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25960== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25960== Command: ./test -r xml "List::split\ simple"
==25960== 
==25960== 
==25960== HEAP SUMMARY:
==25960==     in use at exit: 0 bytes in 0 blocks
==25960==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==25960== 
==25960== All heap blocks were freed -- no leaks are possible
==25960== 
==25960== For counts of detected and suppressed errors, rerun with: -v
==25960== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25991== Memcheck, a memory error detector
==25991== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25991== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25991== Command: ./test -r xml "List::_destroy\ empty\ list"
==25991== 
==25991== 
==25991== HEAP SUMMARY:
==25991==     in use at exit: 0 bytes in 0 blocks
==25991==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==25991== 
==25991== All heap blocks were freed -- no leaks are possible
==25991== 
==25991== For counts of detected and suppressed errors, rerun with: -v
==25991== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==25996== Memcheck, a memory error detector
==25996== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25996== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25996== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==25996== 
==25996== 
==25996== HEAP SUMMARY:
==25996==     in use at exit: 0 bytes in 0 blocks
==25996==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==25996== 
==25996== All heap blocks were freed -- no leaks are possible
==25996== 
==25996== For counts of detected and suppressed errors, rerun with: -v
==25996== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26001== Memcheck, a memory error detector
==26001== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26001== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26001== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==26001== 
==26001== 
==26001== HEAP SUMMARY:
==26001==     in use at exit: 0 bytes in 0 blocks
==26001==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==26001== 
==26001== All heap blocks were freed -- no leaks are possible
==26001== 
==26001== For counts of detected and suppressed errors, rerun with: -v
==26001== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26019== Memcheck, a memory error detector
==26019== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26019== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26019== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==26019== 
==26019== 
==26019== HEAP SUMMARY:
==26019==     in use at exit: 0 bytes in 0 blocks
==26019==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==26019== 
==26019== All heap blocks were freed -- no leaks are possible
==26019== 
==26019== For counts of detected and suppressed errors, rerun with: -v
==26019== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26023== Memcheck, a memory error detector
==26023== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26023== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26023== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26023== 
==26023== 
==26023== HEAP SUMMARY:
==26023==     in use at exit: 0 bytes in 0 blocks
==26023==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==26023== 
==26023== All heap blocks were freed -- no leaks are possible
==26023== 
==26023== For counts of detected and suppressed errors, rerun with: -v
==26023== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26030== Memcheck, a memory error detector
==26030== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26030== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26030== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==26030== 
==26030== 
==26030== HEAP SUMMARY:
==26030==     in use at exit: 0 bytes in 0 blocks
==26030==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==26030== 
==26030== All heap blocks were freed -- no leaks are possible
==26030== 
==26030== For counts of detected and suppressed errors, rerun with: -v
==26030== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26033== Memcheck, a memory error detector
==26033== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26033== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26033== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==26033== 
==26033== 
==26033== HEAP SUMMARY:
==26033==     in use at exit: 0 bytes in 0 blocks
==26033==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==26033== 
==26033== All heap blocks were freed -- no leaks are possible
==26033== 
==26033== For counts of detected and suppressed errors, rerun with: -v
==26033== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26059== Memcheck, a memory error detector
==26059== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26059== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26059== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==26059== 
==26059== 
==26059== HEAP SUMMARY:
==26059==     in use at exit: 0 bytes in 0 blocks
==26059==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==26059== 
==26059== All heap blocks were freed -- no leaks are possible
==26059== 
==26059== For counts of detected and suppressed errors, rerun with: -v
==26059== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26064== Memcheck, a memory error detector
==26064== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26064== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26064== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==26064== 
==26064== 
==26064== HEAP SUMMARY:
==26064==     in use at exit: 0 bytes in 0 blocks
==26064==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==26064== 
==26064== All heap blocks were freed -- no leaks are possible
==26064== 
==26064== For counts of detected and suppressed errors, rerun with: -v
==26064== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26072== Memcheck, a memory error detector
==26072== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26072== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26072== Command: ./test -r xml "List::insert\ contents\ #2"
==26072== 
==26072== 
==26072== HEAP SUMMARY:
==26072==     in use at exit: 0 bytes in 0 blocks
==26072==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==26072== 
==26072== All heap blocks were freed -- no leaks are possible
==26072== 
==26072== For counts of detected and suppressed errors, rerun with: -v
==26072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==26075== Memcheck, a memory error detector
==26075== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==26075== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==26075== Command: ./test -r xml "List::split\ edge\ cases"
==26075== 
==26075== 
==26075== HEAP SUMMARY:
==26075==     in use at exit: 0 bytes in 0 blocks
==26075==   total heap usage: 2,133 allocs, 2,133 frees, 252,464 bytes allocated
==26075== 
==26075== All heap blocks were freed -- no leaks are possible
==26075== 
==26075== For counts of detected and suppressed errors, rerun with: -v
==26075== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **ashwins2** using **9417b85f69439bab28d373927d3b6656269eecb2** (from **February 27th 2020, 11:59:59 pm**)
