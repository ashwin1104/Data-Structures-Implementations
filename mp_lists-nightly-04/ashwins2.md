


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
==44301== Memcheck, a memory error detector
==44301== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44301== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44301== Command: ./test -r xml "List::merge"
==44301== 
==44301== 
==44301== HEAP SUMMARY:
==44301==     in use at exit: 0 bytes in 0 blocks
==44301==   total heap usage: 243,308 allocs, 243,308 frees, 79,504,945 bytes allocated
==44301== 
==44301== All heap blocks were freed -- no leaks are possible
==44301== 
==44301== For counts of detected and suppressed errors, rerun with: -v
==44301== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44339== Memcheck, a memory error detector
==44339== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44339== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44339== Command: ./test -r xml "List::sort\ simple\ #1"
==44339== 
==44339== 
==44339== HEAP SUMMARY:
==44339==     in use at exit: 0 bytes in 0 blocks
==44339==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==44339== 
==44339== All heap blocks were freed -- no leaks are possible
==44339== 
==44339== For counts of detected and suppressed errors, rerun with: -v
==44339== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44342== Memcheck, a memory error detector
==44342== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44342== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44342== Command: ./test -r xml "List::sort\ simple\ #2"
==44342== 
==44342== 
==44342== HEAP SUMMARY:
==44342==     in use at exit: 0 bytes in 0 blocks
==44342==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==44342== 
==44342== All heap blocks were freed -- no leaks are possible
==44342== 
==44342== For counts of detected and suppressed errors, rerun with: -v
==44342== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44362== Memcheck, a memory error detector
==44362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44362== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44362== Command: ./test -r xml "List::insertFront\ size"
==44362== 
==44362== 
==44362== HEAP SUMMARY:
==44362==     in use at exit: 0 bytes in 0 blocks
==44362==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==44362== 
==44362== All heap blocks were freed -- no leaks are possible
==44362== 
==44362== For counts of detected and suppressed errors, rerun with: -v
==44362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44368== Memcheck, a memory error detector
==44368== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44368== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44368== Command: ./test -r xml "List::insertBack\ size"
==44368== 
==44368== 
==44368== HEAP SUMMARY:
==44368==     in use at exit: 0 bytes in 0 blocks
==44368==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==44368== 
==44368== All heap blocks were freed -- no leaks are possible
==44368== 
==44368== For counts of detected and suppressed errors, rerun with: -v
==44368== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44393== Memcheck, a memory error detector
==44393== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44393== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44393== Command: ./test -r xml "List::insert\ contents"
==44393== 
==44393== 
==44393== HEAP SUMMARY:
==44393==     in use at exit: 0 bytes in 0 blocks
==44393==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==44393== 
==44393== All heap blocks were freed -- no leaks are possible
==44393== 
==44393== For counts of detected and suppressed errors, rerun with: -v
==44393== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44421== Memcheck, a memory error detector
==44421== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44421== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44421== Command: ./test -r xml "List::triplerotate\ basic"
==44421== 
==44421== 
==44421== HEAP SUMMARY:
==44421==     in use at exit: 0 bytes in 0 blocks
==44421==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==44421== 
==44421== All heap blocks were freed -- no leaks are possible
==44421== 
==44421== For counts of detected and suppressed errors, rerun with: -v
==44421== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44439== Memcheck, a memory error detector
==44439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44439== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44439== Command: ./test -r xml "List::triplerotate\ simple"
==44439== 
==44439== 
==44439== HEAP SUMMARY:
==44439==     in use at exit: 0 bytes in 0 blocks
==44439==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==44439== 
==44439== All heap blocks were freed -- no leaks are possible
==44439== 
==44439== For counts of detected and suppressed errors, rerun with: -v
==44439== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44444== Memcheck, a memory error detector
==44444== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44444== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44444== Command: ./test -r xml "List::split\ simple"
==44444== 
==44444== 
==44444== HEAP SUMMARY:
==44444==     in use at exit: 0 bytes in 0 blocks
==44444==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==44444== 
==44444== All heap blocks were freed -- no leaks are possible
==44444== 
==44444== For counts of detected and suppressed errors, rerun with: -v
==44444== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44454== Memcheck, a memory error detector
==44454== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44454== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44454== Command: ./test -r xml "List::_destroy\ empty\ list"
==44454== 
==44454== 
==44454== HEAP SUMMARY:
==44454==     in use at exit: 0 bytes in 0 blocks
==44454==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==44454== 
==44454== All heap blocks were freed -- no leaks are possible
==44454== 
==44454== For counts of detected and suppressed errors, rerun with: -v
==44454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44474== Memcheck, a memory error detector
==44474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44474== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44474== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==44474== 
==44474== 
==44474== HEAP SUMMARY:
==44474==     in use at exit: 0 bytes in 0 blocks
==44474==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==44474== 
==44474== All heap blocks were freed -- no leaks are possible
==44474== 
==44474== For counts of detected and suppressed errors, rerun with: -v
==44474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44479== Memcheck, a memory error detector
==44479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44479== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44479== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==44479== 
==44479== 
==44479== HEAP SUMMARY:
==44479==     in use at exit: 0 bytes in 0 blocks
==44479==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==44479== 
==44479== All heap blocks were freed -- no leaks are possible
==44479== 
==44479== For counts of detected and suppressed errors, rerun with: -v
==44479== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44484== Memcheck, a memory error detector
==44484== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44484== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44484== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==44484== 
==44484== 
==44484== HEAP SUMMARY:
==44484==     in use at exit: 0 bytes in 0 blocks
==44484==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==44484== 
==44484== All heap blocks were freed -- no leaks are possible
==44484== 
==44484== For counts of detected and suppressed errors, rerun with: -v
==44484== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44502== Memcheck, a memory error detector
==44502== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44502== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44502== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==44502== 
==44502== 
==44502== HEAP SUMMARY:
==44502==     in use at exit: 0 bytes in 0 blocks
==44502==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==44502== 
==44502== All heap blocks were freed -- no leaks are possible
==44502== 
==44502== For counts of detected and suppressed errors, rerun with: -v
==44502== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44507== Memcheck, a memory error detector
==44507== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44507== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44507== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==44507== 
==44507== 
==44507== HEAP SUMMARY:
==44507==     in use at exit: 0 bytes in 0 blocks
==44507==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==44507== 
==44507== All heap blocks were freed -- no leaks are possible
==44507== 
==44507== For counts of detected and suppressed errors, rerun with: -v
==44507== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44514== Memcheck, a memory error detector
==44514== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44514== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44514== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==44514== 
==44514== 
==44514== HEAP SUMMARY:
==44514==     in use at exit: 0 bytes in 0 blocks
==44514==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==44514== 
==44514== All heap blocks were freed -- no leaks are possible
==44514== 
==44514== For counts of detected and suppressed errors, rerun with: -v
==44514== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44546== Memcheck, a memory error detector
==44546== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44546== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44546== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==44546== 
==44546== 
==44546== HEAP SUMMARY:
==44546==     in use at exit: 0 bytes in 0 blocks
==44546==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==44546== 
==44546== All heap blocks were freed -- no leaks are possible
==44546== 
==44546== For counts of detected and suppressed errors, rerun with: -v
==44546== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44564== Memcheck, a memory error detector
==44564== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44564== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44564== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==44564== 
==44564== 
==44564== HEAP SUMMARY:
==44564==     in use at exit: 0 bytes in 0 blocks
==44564==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==44564== 
==44564== All heap blocks were freed -- no leaks are possible
==44564== 
==44564== For counts of detected and suppressed errors, rerun with: -v
==44564== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44569== Memcheck, a memory error detector
==44569== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44569== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44569== Command: ./test -r xml "List::reverse\ simple"
==44569== 
==44569== 
==44569== HEAP SUMMARY:
==44569==     in use at exit: 0 bytes in 0 blocks
==44569==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==44569== 
==44569== All heap blocks were freed -- no leaks are possible
==44569== 
==44569== For counts of detected and suppressed errors, rerun with: -v
==44569== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44575== Memcheck, a memory error detector
==44575== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44575== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44575== Command: ./test -r xml "List::reverse\ edge\ cases"
==44575== 
==44575== 
==44575== HEAP SUMMARY:
==44575==     in use at exit: 0 bytes in 0 blocks
==44575==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==44575== 
==44575== All heap blocks were freed -- no leaks are possible
==44575== 
==44575== For counts of detected and suppressed errors, rerun with: -v
==44575== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44593== Memcheck, a memory error detector
==44593== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44593== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44593== Command: ./test -r xml "List::reverseNth\ #3"
==44593== 
==44593== 
==44593== HEAP SUMMARY:
==44593==     in use at exit: 0 bytes in 0 blocks
==44593==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==44593== 
==44593== All heap blocks were freed -- no leaks are possible
==44593== 
==44593== For counts of detected and suppressed errors, rerun with: -v
==44593== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44608== Memcheck, a memory error detector
==44608== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44608== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44608== Command: ./test -r xml "List::merge\ #2"
==44608== 
==44608== 
==44608== HEAP SUMMARY:
==44608==     in use at exit: 0 bytes in 0 blocks
==44608==   total heap usage: 2,243 allocs, 2,243 frees, 265,808 bytes allocated
==44608== 
==44608== All heap blocks were freed -- no leaks are possible
==44608== 
==44608== For counts of detected and suppressed errors, rerun with: -v
==44608== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44632== Memcheck, a memory error detector
==44632== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44632== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44632== Command: ./test -r xml "List::sort\ simple\ #3"
==44632== 
==44632== 
==44632== HEAP SUMMARY:
==44632==     in use at exit: 0 bytes in 0 blocks
==44632==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==44632== 
==44632== All heap blocks were freed -- no leaks are possible
==44632== 
==44632== For counts of detected and suppressed errors, rerun with: -v
==44632== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44638== Memcheck, a memory error detector
==44638== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44638== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44638== Command: ./test -r xml "List::insert\ contents\ #2"
==44638== 
==44638== 
==44638== HEAP SUMMARY:
==44638==     in use at exit: 0 bytes in 0 blocks
==44638==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==44638== 
==44638== All heap blocks were freed -- no leaks are possible
==44638== 
==44638== For counts of detected and suppressed errors, rerun with: -v
==44638== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==44659== Memcheck, a memory error detector
==44659== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44659== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44659== Command: ./test -r xml "List::split\ edge\ cases"
==44659== 
==44659== 
==44659== HEAP SUMMARY:
==44659==     in use at exit: 0 bytes in 0 blocks
==44659==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==44659== 
==44659== All heap blocks were freed -- no leaks are possible
==44659== 
==44659== For counts of detected and suppressed errors, rerun with: -v
==44659== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
