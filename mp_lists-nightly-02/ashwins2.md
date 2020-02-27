


## Score: 49/109 (44.95%)


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


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==4518== Memcheck, a memory error detector
==4518== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4518== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4518== Command: ./test -r xml "List::insertFront\ size"
==4518== 
==4518== 
==4518== HEAP SUMMARY:
==4518==     in use at exit: 0 bytes in 0 blocks
==4518==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==4518== 
==4518== All heap blocks were freed -- no leaks are possible
==4518== 
==4518== For counts of detected and suppressed errors, rerun with: -v
==4518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4547== Memcheck, a memory error detector
==4547== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4547== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4547== Command: ./test -r xml "List::insertBack\ size"
==4547== 
==4547== 
==4547== HEAP SUMMARY:
==4547==     in use at exit: 0 bytes in 0 blocks
==4547==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==4547== 
==4547== All heap blocks were freed -- no leaks are possible
==4547== 
==4547== For counts of detected and suppressed errors, rerun with: -v
==4547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4568== Memcheck, a memory error detector
==4568== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4568== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4568== Command: ./test -r xml "List::insert\ contents"
==4568== 
==4568== 
==4568== HEAP SUMMARY:
==4568==     in use at exit: 0 bytes in 0 blocks
==4568==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==4568== 
==4568== All heap blocks were freed -- no leaks are possible
==4568== 
==4568== For counts of detected and suppressed errors, rerun with: -v
==4568== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4631== Memcheck, a memory error detector
==4631== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4631== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4631== Command: ./test -r xml "List::triplerotate\ basic"
==4631== 
==4631== 
==4631== HEAP SUMMARY:
==4631==     in use at exit: 0 bytes in 0 blocks
==4631==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==4631== 
==4631== All heap blocks were freed -- no leaks are possible
==4631== 
==4631== For counts of detected and suppressed errors, rerun with: -v
==4631== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4662== Memcheck, a memory error detector
==4662== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4662== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4662== Command: ./test -r xml "List::triplerotate\ simple"
==4662== 
==4662== 
==4662== HEAP SUMMARY:
==4662==     in use at exit: 0 bytes in 0 blocks
==4662==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==4662== 
==4662== All heap blocks were freed -- no leaks are possible
==4662== 
==4662== For counts of detected and suppressed errors, rerun with: -v
==4662== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4676== Memcheck, a memory error detector
==4676== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4676== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4676== Command: ./test -r xml "List::split\ simple"
==4676== 
==4676== 
==4676== HEAP SUMMARY:
==4676==     in use at exit: 0 bytes in 0 blocks
==4676==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==4676== 
==4676== All heap blocks were freed -- no leaks are possible
==4676== 
==4676== For counts of detected and suppressed errors, rerun with: -v
==4676== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4737== Memcheck, a memory error detector
==4737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4737== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4737== Command: ./test -r xml "List::_destroy\ empty\ list"
==4737== 
==4737== 
==4737== HEAP SUMMARY:
==4737==     in use at exit: 0 bytes in 0 blocks
==4737==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==4737== 
==4737== All heap blocks were freed -- no leaks are possible
==4737== 
==4737== For counts of detected and suppressed errors, rerun with: -v
==4737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==4842== Memcheck, a memory error detector
==4842== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4842== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==4842== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==4842== 
==4842== 
==4842== HEAP SUMMARY:
==4842==     in use at exit: 0 bytes in 0 blocks
==4842==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==4842== 
==4842== All heap blocks were freed -- no leaks are possible
==4842== 
==4842== For counts of detected and suppressed errors, rerun with: -v
==4842== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5127== Memcheck, a memory error detector
==5127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5127== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==5127== 
==5127== 
==5127== HEAP SUMMARY:
==5127==     in use at exit: 0 bytes in 0 blocks
==5127==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==5127== 
==5127== All heap blocks were freed -- no leaks are possible
==5127== 
==5127== For counts of detected and suppressed errors, rerun with: -v
==5127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5145== Memcheck, a memory error detector
==5145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5145== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==5145== 
==5145== 
==5145== HEAP SUMMARY:
==5145==     in use at exit: 0 bytes in 0 blocks
==5145==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==5145== 
==5145== All heap blocks were freed -- no leaks are possible
==5145== 
==5145== For counts of detected and suppressed errors, rerun with: -v
==5145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5152== Memcheck, a memory error detector
==5152== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5152== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5152== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5152== 
==5152== 
==5152== HEAP SUMMARY:
==5152==     in use at exit: 0 bytes in 0 blocks
==5152==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==5152== 
==5152== All heap blocks were freed -- no leaks are possible
==5152== 
==5152== For counts of detected and suppressed errors, rerun with: -v
==5152== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5173== Memcheck, a memory error detector
==5173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5173== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5173== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==5173== 
==5173== 
==5173== HEAP SUMMARY:
==5173==     in use at exit: 0 bytes in 0 blocks
==5173==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==5173== 
==5173== All heap blocks were freed -- no leaks are possible
==5173== 
==5173== For counts of detected and suppressed errors, rerun with: -v
==5173== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5461== Memcheck, a memory error detector
==5461== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5461== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5461== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==5461== 
==5461== 
==5461== HEAP SUMMARY:
==5461==     in use at exit: 0 bytes in 0 blocks
==5461==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==5461== 
==5461== All heap blocks were freed -- no leaks are possible
==5461== 
==5461== For counts of detected and suppressed errors, rerun with: -v
==5461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5473== Memcheck, a memory error detector
==5473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5473== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5473== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==5473== 
==5473== 
==5473== HEAP SUMMARY:
==5473==     in use at exit: 0 bytes in 0 blocks
==5473==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==5473== 
==5473== All heap blocks were freed -- no leaks are possible
==5473== 
==5473== For counts of detected and suppressed errors, rerun with: -v
==5473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==5478== Memcheck, a memory error detector
==5478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5478== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5478== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==5478== 
==5478== 
==5478== HEAP SUMMARY:
==5478==     in use at exit: 0 bytes in 0 blocks
==5478==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==5478== 
==5478== All heap blocks were freed -- no leaks are possible
==5478== 
==5478== For counts of detected and suppressed errors, rerun with: -v
==5478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==5516== Memcheck, a memory error detector
==5516== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5516== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5516== Command: ./test -r xml "List::reverse\ edge\ cases"
==5516== 
==5516== 
==5516== HEAP SUMMARY:
==5516==     in use at exit: 0 bytes in 0 blocks
==5516==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==5516== 
==5516== All heap blocks were freed -- no leaks are possible
==5516== 
==5516== For counts of detected and suppressed errors, rerun with: -v
==5516== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==5533== Memcheck, a memory error detector
==5533== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5533== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==5533== Command: ./test -r xml "List::insert\ contents\ #2"
==5533== 
==5533== 
==5533== HEAP SUMMARY:
==5533==     in use at exit: 0 bytes in 0 blocks
==5533==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==5533== 
==5533== All heap blocks were freed -- no leaks are possible
==5533== 
==5533== For counts of detected and suppressed errors, rerun with: -v
==5533== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
