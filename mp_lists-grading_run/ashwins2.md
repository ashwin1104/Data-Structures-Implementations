


## Score: 121/121 (100.00%)


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
==27601== Memcheck, a memory error detector
==27601== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27601== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27601== Command: ./test -r xml "List::merge"
==27601== 
==27601== 
==27601== HEAP SUMMARY:
==27601==     in use at exit: 0 bytes in 0 blocks
==27601==   total heap usage: 243,356 allocs, 243,356 frees, 79,517,849 bytes allocated
==27601== 
==27601== All heap blocks were freed -- no leaks are possible
==27601== 
==27601== For counts of detected and suppressed errors, rerun with: -v
==27601== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27608== Memcheck, a memory error detector
==27608== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27608== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27608== Command: ./test -r xml "List::sort\ simple\ #1"
==27608== 
==27608== 
==27608== HEAP SUMMARY:
==27608==     in use at exit: 0 bytes in 0 blocks
==27608==   total heap usage: 2,250 allocs, 2,250 frees, 276,576 bytes allocated
==27608== 
==27608== All heap blocks were freed -- no leaks are possible
==27608== 
==27608== For counts of detected and suppressed errors, rerun with: -v
==27608== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27611== Memcheck, a memory error detector
==27611== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27611== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27611== Command: ./test -r xml "List::sort\ simple\ #2"
==27611== 
==27611== 
==27611== HEAP SUMMARY:
==27611==     in use at exit: 0 bytes in 0 blocks
==27611==   total heap usage: 2,250 allocs, 2,250 frees, 276,624 bytes allocated
==27611== 
==27611== All heap blocks were freed -- no leaks are possible
==27611== 
==27611== For counts of detected and suppressed errors, rerun with: -v
==27611== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27618== Memcheck, a memory error detector
==27618== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27618== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27618== Command: ./test -r xml "List::insertFront\ size"
==27618== 
==27618== 
==27618== HEAP SUMMARY:
==27618==     in use at exit: 0 bytes in 0 blocks
==27618==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==27618== 
==27618== All heap blocks were freed -- no leaks are possible
==27618== 
==27618== For counts of detected and suppressed errors, rerun with: -v
==27618== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27621== Memcheck, a memory error detector
==27621== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27621== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27621== Command: ./test -r xml "List::insertBack\ size"
==27621== 
==27621== 
==27621== HEAP SUMMARY:
==27621==     in use at exit: 0 bytes in 0 blocks
==27621==   total heap usage: 2,395 allocs, 2,395 frees, 281,176 bytes allocated
==27621== 
==27621== All heap blocks were freed -- no leaks are possible
==27621== 
==27621== For counts of detected and suppressed errors, rerun with: -v
==27621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27624== Memcheck, a memory error detector
==27624== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27624== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27624== Command: ./test -r xml "List::insert\ contents"
==27624== 
==27624== 
==27624== HEAP SUMMARY:
==27624==     in use at exit: 0 bytes in 0 blocks
==27624==   total heap usage: 2,391 allocs, 2,391 frees, 281,080 bytes allocated
==27624== 
==27624== All heap blocks were freed -- no leaks are possible
==27624== 
==27624== For counts of detected and suppressed errors, rerun with: -v
==27624== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27627== Memcheck, a memory error detector
==27627== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27627== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27627== Command: ./test -r xml "List::triplerotate\ basic"
==27627== 
==27627== 
==27627== HEAP SUMMARY:
==27627==     in use at exit: 0 bytes in 0 blocks
==27627==   total heap usage: 2,399 allocs, 2,399 frees, 281,368 bytes allocated
==27627== 
==27627== All heap blocks were freed -- no leaks are possible
==27627== 
==27627== For counts of detected and suppressed errors, rerun with: -v
==27627== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27631== Memcheck, a memory error detector
==27631== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27631== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27631== Command: ./test -r xml "List::triplerotate\ simple"
==27631== 
==27631== 
==27631== HEAP SUMMARY:
==27631==     in use at exit: 0 bytes in 0 blocks
==27631==   total heap usage: 2,403 allocs, 2,403 frees, 281,464 bytes allocated
==27631== 
==27631== All heap blocks were freed -- no leaks are possible
==27631== 
==27631== For counts of detected and suppressed errors, rerun with: -v
==27631== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27636== Memcheck, a memory error detector
==27636== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27636== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27636== Command: ./test -r xml "List::split\ simple"
==27636== 
==27636== 
==27636== HEAP SUMMARY:
==27636==     in use at exit: 0 bytes in 0 blocks
==27636==   total heap usage: 2,253 allocs, 2,253 frees, 276,648 bytes allocated
==27636== 
==27636== All heap blocks were freed -- no leaks are possible
==27636== 
==27636== For counts of detected and suppressed errors, rerun with: -v
==27636== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27640== Memcheck, a memory error detector
==27640== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27640== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27640== Command: ./test -r xml "List::_destroy\ empty\ list"
==27640== 
==27640== 
==27640== HEAP SUMMARY:
==27640==     in use at exit: 0 bytes in 0 blocks
==27640==   total heap usage: 2,403 allocs, 2,403 frees, 282,008 bytes allocated
==27640== 
==27640== All heap blocks were freed -- no leaks are possible
==27640== 
==27640== For counts of detected and suppressed errors, rerun with: -v
==27640== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27644== Memcheck, a memory error detector
==27644== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27644== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27644== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==27644== 
==27644== 
==27644== HEAP SUMMARY:
==27644==     in use at exit: 0 bytes in 0 blocks
==27644==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==27644== 
==27644== All heap blocks were freed -- no leaks are possible
==27644== 
==27644== For counts of detected and suppressed errors, rerun with: -v
==27644== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27647== Memcheck, a memory error detector
==27647== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27647== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27647== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==27647== 
==27647== 
==27647== HEAP SUMMARY:
==27647==     in use at exit: 0 bytes in 0 blocks
==27647==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==27647== 
==27647== All heap blocks were freed -- no leaks are possible
==27647== 
==27647== For counts of detected and suppressed errors, rerun with: -v
==27647== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27650== Memcheck, a memory error detector
==27650== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27650== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27650== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==27650== 
==27650== 
==27650== HEAP SUMMARY:
==27650==     in use at exit: 0 bytes in 0 blocks
==27650==   total heap usage: 2,407 allocs, 2,407 frees, 288,744 bytes allocated
==27650== 
==27650== All heap blocks were freed -- no leaks are possible
==27650== 
==27650== For counts of detected and suppressed errors, rerun with: -v
==27650== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27653== Memcheck, a memory error detector
==27653== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27653== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27653== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27653== 
==27653== 
==27653== HEAP SUMMARY:
==27653==     in use at exit: 0 bytes in 0 blocks
==27653==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==27653== 
==27653== All heap blocks were freed -- no leaks are possible
==27653== 
==27653== For counts of detected and suppressed errors, rerun with: -v
==27653== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27656== Memcheck, a memory error detector
==27656== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27656== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27656== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==27656== 
==27656== 
==27656== HEAP SUMMARY:
==27656==     in use at exit: 0 bytes in 0 blocks
==27656==   total heap usage: 2,407 allocs, 2,407 frees, 286,344 bytes allocated
==27656== 
==27656== All heap blocks were freed -- no leaks are possible
==27656== 
==27656== For counts of detected and suppressed errors, rerun with: -v
==27656== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27659== Memcheck, a memory error detector
==27659== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27659== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27659== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27659== 
==27659== 
==27659== HEAP SUMMARY:
==27659==     in use at exit: 0 bytes in 0 blocks
==27659==   total heap usage: 2,407 allocs, 2,407 frees, 291,144 bytes allocated
==27659== 
==27659== All heap blocks were freed -- no leaks are possible
==27659== 
==27659== For counts of detected and suppressed errors, rerun with: -v
==27659== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27662== Memcheck, a memory error detector
==27662== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27662== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27662== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==27662== 
==27662== 
==27662== HEAP SUMMARY:
==27662==     in use at exit: 0 bytes in 0 blocks
==27662==   total heap usage: 2,400 allocs, 2,400 frees, 283,776 bytes allocated
==27662== 
==27662== All heap blocks were freed -- no leaks are possible
==27662== 
==27662== For counts of detected and suppressed errors, rerun with: -v
==27662== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27665== Memcheck, a memory error detector
==27665== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27665== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27665== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==27665== 
==27665== 
==27665== HEAP SUMMARY:
==27665==     in use at exit: 0 bytes in 0 blocks
==27665==   total heap usage: 2,400 allocs, 2,400 frees, 286,176 bytes allocated
==27665== 
==27665== All heap blocks were freed -- no leaks are possible
==27665== 
==27665== For counts of detected and suppressed errors, rerun with: -v
==27665== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27668== Memcheck, a memory error detector
==27668== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27668== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27668== Command: ./test -r xml "List::reverse\ simple"
==27668== 
==27668== 
==27668== HEAP SUMMARY:
==27668==     in use at exit: 0 bytes in 0 blocks
==27668==   total heap usage: 2,256 allocs, 2,256 frees, 276,756 bytes allocated
==27668== 
==27668== All heap blocks were freed -- no leaks are possible
==27668== 
==27668== For counts of detected and suppressed errors, rerun with: -v
==27668== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27672== Memcheck, a memory error detector
==27672== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27672== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27672== Command: ./test -r xml "List::reverse\ edge\ cases"
==27672== 
==27672== 
==27672== HEAP SUMMARY:
==27672==     in use at exit: 0 bytes in 0 blocks
==27672==   total heap usage: 2,401 allocs, 2,401 frees, 281,456 bytes allocated
==27672== 
==27672== All heap blocks were freed -- no leaks are possible
==27672== 
==27672== For counts of detected and suppressed errors, rerun with: -v
==27672== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27675== Memcheck, a memory error detector
==27675== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27675== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27675== Command: ./test -r xml "List::reverseNth\ #3"
==27675== 
==27675== 
==27675== HEAP SUMMARY:
==27675==     in use at exit: 0 bytes in 0 blocks
==27675==   total heap usage: 2,262 allocs, 2,262 frees, 276,936 bytes allocated
==27675== 
==27675== All heap blocks were freed -- no leaks are possible
==27675== 
==27675== For counts of detected and suppressed errors, rerun with: -v
==27675== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27684== Memcheck, a memory error detector
==27684== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27684== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27684== Command: ./test -r xml "List::merge\ #2"
==27684== 
==27684== 
==27684== HEAP SUMMARY:
==27684==     in use at exit: 0 bytes in 0 blocks
==27684==   total heap usage: 2,291 allocs, 2,291 frees, 278,712 bytes allocated
==27684== 
==27684== All heap blocks were freed -- no leaks are possible
==27684== 
==27684== For counts of detected and suppressed errors, rerun with: -v
==27684== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27687== Memcheck, a memory error detector
==27687== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27687== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27687== Command: ./test -r xml "List::sort\ simple\ #3"
==27687== 
==27687== 
==27687== HEAP SUMMARY:
==27687==     in use at exit: 0 bytes in 0 blocks
==27687==   total heap usage: 2,253 allocs, 2,253 frees, 276,688 bytes allocated
==27687== 
==27687== All heap blocks were freed -- no leaks are possible
==27687== 
==27687== For counts of detected and suppressed errors, rerun with: -v
==27687== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27690== Memcheck, a memory error detector
==27690== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27690== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27690== Command: ./test -r xml "List::insert\ contents\ #2"
==27690== 
==27690== 
==27690== HEAP SUMMARY:
==27690==     in use at exit: 0 bytes in 0 blocks
==27690==   total heap usage: 2,406 allocs, 2,406 frees, 281,576 bytes allocated
==27690== 
==27690== All heap blocks were freed -- no leaks are possible
==27690== 
==27690== For counts of detected and suppressed errors, rerun with: -v
==27690== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27693== Memcheck, a memory error detector
==27693== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27693== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27693== Command: ./test -r xml "List::split\ edge\ cases"
==27693== 
==27693== 
==27693== HEAP SUMMARY:
==27693==     in use at exit: 0 bytes in 0 blocks
==27693==   total heap usage: 2,396 allocs, 2,396 frees, 281,240 bytes allocated
==27693== 
==27693== All heap blocks were freed -- no leaks are possible
==27693== 
==27693== For counts of detected and suppressed errors, rerun with: -v
==27693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==27696== Memcheck, a memory error detector
==27696== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27696== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27696== Command: ./test -r xml "List::triplerotate\ hard"
==27696== 
==27696== 
==27696== HEAP SUMMARY:
==27696==     in use at exit: 0 bytes in 0 blocks
==27696==   total heap usage: 2,408 allocs, 2,408 frees, 281,624 bytes allocated
==27696== 
==27696== All heap blocks were freed -- no leaks are possible
==27696== 
==27696== For counts of detected and suppressed errors, rerun with: -v
==27696== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::triplerotate hard" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





---

This report was generated for **ashwins2** using **e760c80a572a10e80749cdf5181ad51d8469c3f2** (from **March 3rd 2020, 11:59:59 pm**)
