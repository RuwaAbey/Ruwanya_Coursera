### Makefiles

1. One or more files used to tell make how to build a particular project.

- makefile, Makefile, sources.mk, includes.mk

2.Makefiles have build targets or build rules

```make
make all    
make clean
make main.out
make main.o
```

3.Targets can havve dependencies or prerequisities

```make
main.out: main.o my_file.o
    gcc -g -Wl, Map main.map -o main.out main.o my_file.o
```

### Makefile Rules

1. A build rule require a specific syntax of target, :, prerequisites, and commands

- A build rule requires a specific syntax of target, :, prerequisites, and commands
- These are recipes for how to build a particular executable or non-source file
- A recipe can only be executed if the dependencies are met

```make
        --------Dependency List------------------
target: prerequisite1 prerequisite2 prerequisite3   |
    command1  |-Recipes                             |- Rule
    command2  |                                     |
```

### Makefile Syntax

1. Comments start with a #
2. Can include other makefiles
3. Line continuation is done with a \
4. Can create and use variables
5. Can have multiple rules
6. Command lines start with a tab
7. Targets can depend on other targets

### Building the Executable

1. Automatic Variables - variables in a recipe with a scope

- $@ - Target
- $^ - All Prerequisities

```make
$(TARGET) : $(OBJS)
    $(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDES) -o $@ $^
```

### Makefile Variables

1. Makes Makefile dynamic & eliminates text duplication

- Vriables can use other variables

a. Recursivly expanded variables: Variables are expanded when variable is substituted in
b.Simply Expanded Variables (:=): Variables are expanded once at time of the variable definition

```make
CPU=cortex-m0plus    |
ARCH=thumb           |- Recursively expanded variables (=)
SPECS=nosys.specs    |
```

```make
PLATFORM_FLAGS:=-m$(ARCH) \             |
                -mcpu=$(CPU) \          |- Simply Expanded Variables(:=)
                --specs=$(SPECS)        |
```
### Pattern matching

1. Pattern Matching Operator - %

- Pattern matches a target object rule with an associated source file

```make
%.o: %.c
    $(CC) -C $@ -o $< $(CFLAGS)
```
- Pattern Matches are dynamic: Need a way to track generated object files

- Can use source variables (SRCS) to generate a list of object files variable (OBJS)

```make
OBJS:=$(SRCS:.c=.o)   --->   For every *.c file, associate a *.o file with the same name
```

```make
SRCS:= main.c \
       my_file.c \
       my_memory.c
```

```make
OBJS:= main.o \
       my_file.o \
       my_memory.o
```

### Target Suggestions

1. Targets do NOT have to be a file
- Need to have .PHONY directive  --> Can make you own target names!

```make
.PHONY: all
all: main.out
main.out: $(OBJS)
      gcc $(CFLAGS) -o main.out $(OBJS)
```

```make
.PHONY: clean
clean:
    rm main.map $(OBJS) main.out
```

all - build final executable binary
clean - Removes all generated and object files
debig - Builds adebug image with debug symbols enabled

### Functions & Dynamic Vriables

1. Can use make functions to process info
    - Output goes into variables
    - Shell, file, origin, conditional, etc

```make
(function arguments)
```

2. Shell functions are one form command expansion that can gather data from the system outside of make
- Use the syntax

```make
 $(shell command)
```

```make
ARCH:=$(shell arch)
CWD:=$(shell pwd)
OS:=(shell uname)
```
3. Use conditional statements to change flags

```make
OS:=$(shell unmae -s)
ifeq ($(OS),Linux)
    CC=gcc
endif
```

4. Overriding Variables

- Pass input parametes into make alter build
    - Architecture to build for
    - CPU 
    - Platfrom/Board
    - Computer Instance
    - Compiler/Linker Options

```make
make all PLATFROM=msp432
make all CPU=cortex-m4
make all ARCH=arm
```
Inputs can set variables or be used conditionally

```make
ifeq ($(PLATFORM), MSP)
    CPU=cortex-m4
endif

ifeq ($(PLATFORM),FRDM)
    CPU=cortex-m0plus
endif
```

### Overriding Variables

By making a target variable based, you can change/alter flags for linker or compiler

```bash
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -O $(TARGET) $(OBJS)
```

### Special Variables

1.  Variables implicity used by make
    - CC - compiler
    - CPP - Preprocessor Program
    - AS - Assembler Program
    - LD - Linker
    - CFLAGS - C program Flags
    - CPPFLAGS - C preprocessor Flags
    - ASFLAGS - Flags for Assembler
    - LDFLAGS - C program Linker Flags
    - LDLIBS - Extra flags for Libraries

- Make has internal rules it uses for targets not defined
- You provide flags


