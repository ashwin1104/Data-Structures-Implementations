


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
==12103== Memcheck, a memory error detector
==12103== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12103== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12103== Command: ./test -r xml "List::merge"
==12103== 
==12103== 
==12103== HEAP SUMMARY:
==12103==     in use at exit: 0 bytes in 0 blocks
==12103==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==12103== 
==12103== All heap blocks were freed -- no leaks are possible
==12103== 
==12103== For counts of detected and suppressed errors, rerun with: -v
==12103== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12126== Memcheck, a memory error detector
==12126== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12126== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12126== Command: ./test -r xml "List::sort\ simple\ #1"
==12126== 
==12126== 
==12126== HEAP SUMMARY:
==12126==     in use at exit: 0 bytes in 0 blocks
==12126==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==12126== 
==12126== All heap blocks were freed -- no leaks are possible
==12126== 
==12126== For counts of detected and suppressed errors, rerun with: -v
==12126== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12131== Memcheck, a memory error detector
==12131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12131== Command: ./test -r xml "List::sort\ simple\ #2"
==12131== 
==12131== 
==12131== HEAP SUMMARY:
==12131==     in use at exit: 0 bytes in 0 blocks
==12131==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==12131== 
==12131== All heap blocks were freed -- no leaks are possible
==12131== 
==12131== For counts of detected and suppressed errors, rerun with: -v
==12131== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12172== Memcheck, a memory error detector
==12172== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12172== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12172== Command: ./test -r xml "List::insertFront\ size"
==12172== 
==12172== 
==12172== HEAP SUMMARY:
==12172==     in use at exit: 0 bytes in 0 blocks
==12172==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==12172== 
==12172== All heap blocks were freed -- no leaks are possible
==12172== 
==12172== For counts of detected and suppressed errors, rerun with: -v
==12172== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12183== Memcheck, a memory error detector
==12183== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12183== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12183== Command: ./test -r xml "List::insertBack\ size"
==12183== 
==12183== 
==12183== HEAP SUMMARY:
==12183==     in use at exit: 0 bytes in 0 blocks
==12183==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==12183== 
==12183== All heap blocks were freed -- no leaks are possible
==12183== 
==12183== For counts of detected and suppressed errors, rerun with: -v
==12183== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12207== Memcheck, a memory error detector
==12207== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12207== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12207== Command: ./test -r xml "List::insert\ contents"
==12207== 
==12207== 
==12207== HEAP SUMMARY:
==12207==     in use at exit: 0 bytes in 0 blocks
==12207==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==12207== 
==12207== All heap blocks were freed -- no leaks are possible
==12207== 
==12207== For counts of detected and suppressed errors, rerun with: -v
==12207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12270== Memcheck, a memory error detector
==12270== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12270== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12270== Command: ./test -r xml "List::triplerotate\ basic"
==12270== 
==12270== 
==12270== HEAP SUMMARY:
==12270==     in use at exit: 0 bytes in 0 blocks
==12270==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==12270== 
==12270== All heap blocks were freed -- no leaks are possible
==12270== 
==12270== For counts of detected and suppressed errors, rerun with: -v
==12270== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12293== Memcheck, a memory error detector
==12293== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12293== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12293== Command: ./test -r xml "List::triplerotate\ simple"
==12293== 
==12293== 
==12293== HEAP SUMMARY:
==12293==     in use at exit: 0 bytes in 0 blocks
==12293==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==12293== 
==12293== All heap blocks were freed -- no leaks are possible
==12293== 
==12293== For counts of detected and suppressed errors, rerun with: -v
==12293== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12319== Memcheck, a memory error detector
==12319== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12319== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12319== Command: ./test -r xml "List::split\ simple"
==12319== 
==12319== 
==12319== HEAP SUMMARY:
==12319==     in use at exit: 0 bytes in 0 blocks
==12319==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==12319== 
==12319== All heap blocks were freed -- no leaks are possible
==12319== 
==12319== For counts of detected and suppressed errors, rerun with: -v
==12319== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12338== Memcheck, a memory error detector
==12338== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12338== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12338== Command: ./test -r xml "List::_destroy\ empty\ list"
==12338== 
==12338== 
==12338== HEAP SUMMARY:
==12338==     in use at exit: 0 bytes in 0 blocks
==12338==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==12338== 
==12338== All heap blocks were freed -- no leaks are possible
==12338== 
==12338== For counts of detected and suppressed errors, rerun with: -v
==12338== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12344== Memcheck, a memory error detector
==12344== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12344== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12344== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==12344== 
==12344== 
==12344== HEAP SUMMARY:
==12344==     in use at exit: 0 bytes in 0 blocks
==12344==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==12344== 
==12344== All heap blocks were freed -- no leaks are possible
==12344== 
==12344== For counts of detected and suppressed errors, rerun with: -v
==12344== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12349== Memcheck, a memory error detector
==12349== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12349== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12349== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==12349== 
==12349== 
==12349== HEAP SUMMARY:
==12349==     in use at exit: 0 bytes in 0 blocks
==12349==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==12349== 
==12349== All heap blocks were freed -- no leaks are possible
==12349== 
==12349== For counts of detected and suppressed errors, rerun with: -v
==12349== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12354== Memcheck, a memory error detector
==12354== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12354== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12354== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==12354== 
==12354== 
==12354== HEAP SUMMARY:
==12354==     in use at exit: 0 bytes in 0 blocks
==12354==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==12354== 
==12354== All heap blocks were freed -- no leaks are possible
==12354== 
==12354== For counts of detected and suppressed errors, rerun with: -v
==12354== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12362== Memcheck, a memory error detector
==12362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12362== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12362== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12362== 
==12362== 
==12362== HEAP SUMMARY:
==12362==     in use at exit: 0 bytes in 0 blocks
==12362==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==12362== 
==12362== All heap blocks were freed -- no leaks are possible
==12362== 
==12362== For counts of detected and suppressed errors, rerun with: -v
==12362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12367== Memcheck, a memory error detector
==12367== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12367== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12367== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==12367== 
==12367== 
==12367== HEAP SUMMARY:
==12367==     in use at exit: 0 bytes in 0 blocks
==12367==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==12367== 
==12367== All heap blocks were freed -- no leaks are possible
==12367== 
==12367== For counts of detected and suppressed errors, rerun with: -v
==12367== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12372== Memcheck, a memory error detector
==12372== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12372== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12372== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==12372== 
==12372== 
==12372== HEAP SUMMARY:
==12372==     in use at exit: 0 bytes in 0 blocks
==12372==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==12372== 
==12372== All heap blocks were freed -- no leaks are possible
==12372== 
==12372== For counts of detected and suppressed errors, rerun with: -v
==12372== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12378== Memcheck, a memory error detector
==12378== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12378== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12378== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==12378== 
==12378== 
==12378== HEAP SUMMARY:
==12378==     in use at exit: 0 bytes in 0 blocks
==12378==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==12378== 
==12378== All heap blocks were freed -- no leaks are possible
==12378== 
==12378== For counts of detected and suppressed errors, rerun with: -v
==12378== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12406== Memcheck, a memory error detector
==12406== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12406== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12406== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==12406== 
==12406== 
==12406== HEAP SUMMARY:
==12406==     in use at exit: 0 bytes in 0 blocks
==12406==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==12406== 
==12406== All heap blocks were freed -- no leaks are possible
==12406== 
==12406== For counts of detected and suppressed errors, rerun with: -v
==12406== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12413== Memcheck, a memory error detector
==12413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12413== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12413== Command: ./test -r xml "List::reverse\ simple"
==12413== 
==12413== 
==12413== HEAP SUMMARY:
==12413==     in use at exit: 0 bytes in 0 blocks
==12413==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==12413== 
==12413== All heap blocks were freed -- no leaks are possible
==12413== 
==12413== For counts of detected and suppressed errors, rerun with: -v
==12413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12420== Memcheck, a memory error detector
==12420== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12420== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12420== Command: ./test -r xml "List::reverse\ edge\ cases"
==12420== 
==12420== 
==12420== HEAP SUMMARY:
==12420==     in use at exit: 0 bytes in 0 blocks
==12420==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==12420== 
==12420== All heap blocks were freed -- no leaks are possible
==12420== 
==12420== For counts of detected and suppressed errors, rerun with: -v
==12420== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12428== Memcheck, a memory error detector
==12428== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12428== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12428== Command: ./test -r xml "List::reverseNth\ #3"
==12428== 
==12428== 
==12428== HEAP SUMMARY:
==12428==     in use at exit: 0 bytes in 0 blocks
==12428==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==12428== 
==12428== All heap blocks were freed -- no leaks are possible
==12428== 
==12428== For counts of detected and suppressed errors, rerun with: -v
==12428== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12438== Memcheck, a memory error detector
==12438== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12438== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12438== Command: ./test -r xml "List::merge\ #2"
==12438== 
==12438== 
==12438== HEAP SUMMARY:
==12438==     in use at exit: 0 bytes in 0 blocks
==12438==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==12438== 
==12438== All heap blocks were freed -- no leaks are possible
==12438== 
==12438== For counts of detected and suppressed errors, rerun with: -v
==12438== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12459== Memcheck, a memory error detector
==12459== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12459== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12459== Command: ./test -r xml "List::sort\ simple\ #3"
==12459== 
==12459== 
==12459== HEAP SUMMARY:
==12459==     in use at exit: 0 bytes in 0 blocks
==12459==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==12459== 
==12459== All heap blocks were freed -- no leaks are possible
==12459== 
==12459== For counts of detected and suppressed errors, rerun with: -v
==12459== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12546== Memcheck, a memory error detector
==12546== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12546== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12546== Command: ./test -r xml "List::insert\ contents\ #2"
==12546== 
==12546== 
==12546== HEAP SUMMARY:
==12546==     in use at exit: 0 bytes in 0 blocks
==12546==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==12546== 
==12546== All heap blocks were freed -- no leaks are possible
==12546== 
==12546== For counts of detected and suppressed errors, rerun with: -v
==12546== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==12561== Memcheck, a memory error detector
==12561== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12561== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12561== Command: ./test -r xml "List::split\ edge\ cases"
==12561== 
==12561== 
==12561== HEAP SUMMARY:
==12561==     in use at exit: 0 bytes in 0 blocks
==12561==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==12561== 
==12561== All heap blocks were freed -- no leaks are possible
==12561== 
==12561== For counts of detected and suppressed errors, rerun with: -v
==12561== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
