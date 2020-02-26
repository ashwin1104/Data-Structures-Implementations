


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==44002== Memcheck, a memory error detector
==44002== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44002== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44002== Command: ./test -r xml "sumDigits"
==44002== 
==44002== 
==44002== HEAP SUMMARY:
==44002==     in use at exit: 0 bytes in 0 blocks
==44002==   total heap usage: 1,689 allocs, 1,689 frees, 218,344 bytes allocated
==44002== 
==44002== All heap blocks were freed -- no leaks are possible
==44002== 
==44002== For counts of detected and suppressed errors, rerun with: -v
==44002== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==44005== Memcheck, a memory error detector
==44005== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44005== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44005== Command: ./test -r xml "triangle"
==44005== 
==44005== 
==44005== HEAP SUMMARY:
==44005==     in use at exit: 0 bytes in 0 blocks
==44005==   total heap usage: 1,675 allocs, 1,675 frees, 217,896 bytes allocated
==44005== 
==44005== All heap blocks were freed -- no leaks are possible
==44005== 
==44005== For counts of detected and suppressed errors, rerun with: -v
==44005== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==44033== Memcheck, a memory error detector
==44033== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44033== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44033== Command: ./test -r xml "sum"
==44033== 
==44033== 
==44033== HEAP SUMMARY:
==44033==     in use at exit: 0 bytes in 0 blocks
==44033==   total heap usage: 1,772 allocs, 1,772 frees, 304,040 bytes allocated
==44033== 
==44033== All heap blocks were freed -- no leaks are possible
==44033== 
==44033== For counts of detected and suppressed errors, rerun with: -v
==44033== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Did not globally/statically declare stack" filename="tests/basic.cpp" line="51">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Sum is correct" filename="tests/basic.cpp" line="61">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="64">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="68">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="79">
        <Section name="Did not make any additional stack objects at functionor function static scope" filename="tests/basic.cpp" line="85">
          <OverallResults successes="1" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="89">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="7" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="7" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==44186== Memcheck, a memory error detector
==44186== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44186== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44186== Command: ./test -r xml "isBalanced"
==44186== 
==44186== 
==44186== HEAP SUMMARY:
==44186==     in use at exit: 0 bytes in 0 blocks
==44186==   total heap usage: 1,752 allocs, 1,752 frees, 314,792 bytes allocated
==44186== 
==44186== All heap blocks were freed -- no leaks are possible
==44186== 
==44186== For counts of detected and suppressed errors, rerun with: -v
==44186== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="97">
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="99">
        <Section name="Did not globally/statically declare stack or queue" filename="tests/basic.cpp" line="101">
          <OverallResults successes="2" failures="0" expectedFailures="0"/>
        </Section>
        <OverallResults successes="4" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="balanced" filename="tests/basic.cpp" line="117">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="133">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="16" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="16" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==44252== Memcheck, a memory error detector
==44252== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44252== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44252== Command: ./test -r xml "scramble\ 17"
==44252== 
==44252== 
==44252== HEAP SUMMARY:
==44252==     in use at exit: 0 bytes in 0 blocks
==44252==   total heap usage: 1,687 allocs, 1,687 frees, 230,816 bytes allocated
==44252== 
==44252== All heap blocks were freed -- no leaks are possible
==44252== 
==44252== For counts of detected and suppressed errors, rerun with: -v
==44252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="151">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==44360== Memcheck, a memory error detector
==44360== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44360== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==44360== Command: ./test -r xml "scramble\ 9"
==44360== 
==44360== 
==44360== HEAP SUMMARY:
==44360==     in use at exit: 0 bytes in 0 blocks
==44360==   total heap usage: 1,682 allocs, 1,682 frees, 230,144 bytes allocated
==44360== 
==44360== All heap blocks were freed -- no leaks are possible
==44360== 
==44360== For counts of detected and suppressed errors, rerun with: -v
==44360== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="179">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **ashwins2** using **b45bda63bf21d7fc5ff5b54727f31fe8ba54f6f4** (from **February 23rd 2020, 11:59:59 pm**)
