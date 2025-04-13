# C Language - Low level learning

#### 0 - Preprocessor (`'gcc'` | `'-o'` | `'-e'` | `'preprocessing'`)
code structure\
`gcc [option] [file_name] [output] [output_file_name]`\
`gcc -e $CFILE -o main.c`

GCC Stages:
1. Preprocessing  (`-E`)
2. Compilation (to assembly) (`-c`)
3. Assembly (to machine code) (`-S`)
4. Linking (to executable) (`gcc`)


#### 1 - Compiler ( `'gcc'` | `'-c'` | `'compiling'` | `''` )
Code Structure\
`gcc [option] [file_name]`\
`gcc -c $CFILE`

Using the `-c` option will stop after the 2nd phase (Compilation to assembly)

#### 2 - Assembler (`'gcc'` | `'-S'` | `'Assembly'` | `''` | )
Code Structure\
`gcc [option] [file_name]`
`gcc -S $CFILE`

Using the -S will stop once the assembly has been completed. (stage 3.)

#### 3 - 

#### 4 - (`puts` | `''` | `''` | `''` | )


#### 5 - (`printf` | `'();'` | `''` | `''` | )
Code Structure:\
`printf("[format_specifier], ... ",[arguments]);`
