/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

### Below are the instructions use for the C1M2V2 Demo

1. GCC is used in the following way on the command line

```bash
  $ gcc [OPTIONS] [FILE-TO-COMPILE]
```

#### Native Compiler Example Commands

1. This will compile and link. Also specifies the output file to store as the
executable file (using the -o <FILE> option. All warnings will be treated as
errors and use the c99 c-standard.

```bash
  $ gcc -std=c99 -Werror main.c
```

2. This will compile and stop before link (-c option). All warnings will be
enabled, use the c89 C-standard. Also use the -v verbose option to print lots
of informaiton of what gcc is doing to the terminal.

```bash
  $ gcc -std=c89 -Wall -v -c main.c
```

#### Cross-Compiler Example Commands

3. This will compile but stop before linking and output the code in assembly in a
file called "main.s". 

```bash
  $ arm-none-eabi-gcc -std=c99 -Wall -S main.c
```

4. Compile but stop before linking and outputs main.s assembly code It will
include debug symbols. Compare this main.s with the previous main.s 

```bash
  $ arm-none-eabi-gcc -g -std=c99 -Wall -S main.c
```

5. This will compile and link main.c with specific architecture and libraries that
are needed for the target processor to run. 

```bash
  $ arm-none-eabi-gcc --specs=nosys.specs -mcpu=cortex-m4 -mthumb -std=c99
  -Wall -march=armv7e-m main.c
```
