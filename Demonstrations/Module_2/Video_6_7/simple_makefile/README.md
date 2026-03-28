### Makefiles

1. One or more files used to tell make how to build a particular project.

- makefile, Makefile, sources.mk, includes.mk

2.Makefiles have build targets or build rules

```bash
make all    
make clean
make main.out
make main.o
```

3.Targets can havve dependencies or prerequisities

```bash
main.out: main.o my_file.o
    gcc -g -Wl, Map main.map -o main.out main.o my_file.o
```

### Makefile Rules

1. A build rule require a specific syntax of target, :, prerequisites, and commands

- A build rule requires a specific syntax of target, :, prerequisites, and commands
- These are recipes for how to build a particular executable or non-source file
- A recipe can only be executed if the dependencies are met

```bash
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

```bash
$(TARGET) : $(OBJS)
    $(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDES) -o $@ $^
```