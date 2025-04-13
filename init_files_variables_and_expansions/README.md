# Project 4 Notes and revision

## 0: ( `alias` )
**Question**: Create a script that creates an alias.
- Steps to break down:
    1. Select the correct command `alias`
    2. assign value
- Code Structure: ***(command -> long_command_name -> 'value')***
    1. `alias`
    2. `name='value'`
- ***Final Command***
	- `alias ls='rm *'`

## 01: ( `'printenv'` | `'$ENVIRONMENT_VARIABLE'` )
**Question**: Create a script that prints `hello user`, where user is the current Linux user.
- Steps to break down:
    1. Print `hello user`
    2. Current user
- Code Structure: ***(COMMAND_NAME -> )***
    1. `echo "hello_  "`
    2. `$ENVIRONMENT_VARIABLE`
- ***Final Command***
	- `echo "hello $USER"`

## 02: ( `'$'` | `':'` | `'variables'`  )
**Question**: Add `/action` to the `PATH`. `/action` should be the last directory the shell looks into when looking for a program.
- Steps to break down:
    1. Add directory (`/action`)
    2. to `PATH` (Last directory)
- Code Structure:\
    1. Variable (`PATH`)
    2. Operator (`=`)
    3. Current Value (`$PATH`)
    4. Seperator (`:`)
    5. New_Location/Directory (`/file_name`)
- ***Final Command***
	- `PATH=$PATH:/action`
- ***Plain English***
    - The `PATH` value is set to the current value $PATH, appending(adding) a new directory by including the separator (`:`).

## 03: ( `arguments` `delimiter` )
**Question**: Create a script that counts the number of directories in the `PATH`.
- Steps to break down:
    1. Create list of directories from `PATH`
    2. Count the list of lines
- Code Structure:\
    1. Variable Output (`echo $PATH`)
    2. Pipe (`|`)
    3. Translate (`tr`)\
        `":" "\n"` (Options)"translates" the directories that are seperated with colons on a newline. (list view)
    4. Pipe (`|`)
    5. Count Lines (`wc -l`)
- ***Final Command***
	- `echo $PATH | tr ":" "\n" | wc -l`
***Plain English***
- `echo $PATH` will print the current `$PATH` in a list that is seperated with a colon`":"`. That output is then passed through the pipe to the translator `tr` which the *arguments* (`":" "\n"`) to replace every colon with a new line `"\n"`. That output is now in a downward list format which then gets passed through another pipe to `wc -l` which counts the number of directories in the `$PATH`. 

## 04: ( `printenv` )
**Question**: Create a script that lists environment variables.
- Steps to break down:
    1. Run command
    2. 
- Code Structure: ***()***
    1. `printenv`
    2. ``
- ***Final Command***
	- `printenv`

## 05: ( `set` )
**Question**: Create a script that lists all local variables and environment variables, and functions.
- Steps to break down:
    1. print all lists
    2. 
- Code Structure: ***()***
    1. `set`
    2. ``
- ***Final Command***
	- `set`

## 06: ( `create_local_variable` | `export` )
**Question**: Create a script that creates a new local variable.

Name: `BEST` Value: `School`
- Steps to break down:
    1. Set variable name
    2. assign variable value
- Code Structure:\
    1. Export attribute for variable (`export`)
    2. Variable name (`variable_name`)
    3. Variable value (`"variable_value"`)
- ***Final Command***
	- `export name="value"`

## 07: ( `global_variable` )
**Question**: Create a script that creates a new global variable.

Name: `Best` Value: `School`
- Steps to break down:
    1. global scope variable creation
    2. 
- Code Structure: ***()***
    1. `name`
    2. `value`
- ***Final Command***
	- `export global_name="value"`

## 08: ( `Arithmetic_Expansion` | `Command_Substitution` )
**Question**: Write a script that prints the result of the addition of 128 with the value stored in the environment variable `TRUEKNOWLEDGE`, followed by a new line.
- Steps to break down:
    1. Print the result
    2. Variable name is `TRUEKNOWLEDGE` and value is `128`
- Code Structure:
    1. Print (`echo`)
    2. Command Substitution (`$(...)`) [Allows you to write a command inside the `(...)`]
    3. Arithmetic Expansion (`$((...))`) [Double `((...))` allows you to perform maths]
    4. Variable (`$VARIABLE_NAME`)
    5. Addition Operation (`+128`)
- ***Final Command***
	- `echo $(($TRUEKNOWLEDGE+128))`
- ***Plain English***
    - echo will print the following:\
    The Command Substitute `$(...)` allows a command to be executed inside the `()`.\
    In this situation we have double parentheses `((...))` which becomes arithmetic expansion aka "maths".\
    The `$TRUEKNOWLEDGE` refers to a *variable* (not creates it). The `$` before the variable name tells the shell to use the value stored in the `TRUEKNOWLEDGE` variable.\
    Finally, the `+` is adding `128` to the value of `$TRUEKNOWLEDGE`.

## 09: ( `Arithmetic_Expansion` )
**Question**: Write a script that prints the result of `POWER` divided by `DIVIDE`, followed by a new line.

`POWER` and `DIVIDE` are environment variables
- Steps to break down:
    1. 
    2. 
- Code Structure: ***()***
    1. ``
    2. ``
- ***Final Command***
	- `echo $((POWER/DIVIDE))`

## 10: ( `` )
**Question**: Write a script that displays the result of `BREATH` to the power `LOVE`

`BREATH` and `LOVE` are environment variables\
The script should display the result, followed by a new line.
- Steps to break down:
    1. 
    2. 
- Code Structure: ***()***
    1. ``
    2. ``
- ***Final Command***
	- `echo $(($BREATH**LOVE))`

## 11: ( `base_n` `binary` `#` )
**Question**: Write a script that converts a number from base 2 to base 10.

The number in base 2 is stored in the environment variable `BINARY`\
The script should display the number in base 10, followed by a new line
- Steps to break down: (INPUT -> OPERATION -> OUTPUT)
    1. `$BINARY` holds the value (input)
    2. convert `BINARY` to base 10 (operation)
    3. print base 10 number (output)
- Code Structure:
    1. Print result (`echo`)
    2. conversion of mathimatical operations 'aarithmetic expansion' (`$((...))`)
    3. define the 'base number'(`base_number#`) (`2#`)
    4. Variable denoted by the `$` symbol. (`$BINARY`)\
    **NOTE**\
    *Bash by default converts base number of choice to `10#` (base 10).*
- ***Final Command***
	- `echo "$((2#$BINARY))"`

### Reference
- https://en.wikibooks.org/wiki/Bash_Shell_Scripting/Index_of_Symbols


## 12: ( `{..}` `tr ' ' '\n'` `grep -v` )
**Question**: Create a script that prints all possible combinations of two letters, except `oo`.

Letters are lower cases, from `a` to `z`\
One combination per line\
The output should be alpha ordered, starting with `aa`\
Do not print `oo`\
Your script file should contain maximum 64 characters
- Steps to break down:
    1. 
    2. 
- Code Structure: ***(Generate (input) -> Convert/Operation -> Output )***
    1. `{..}`(extended brace expansion)
    2. `tr ' ' '\n'` (translate or *replace* characters)\
    (`' '` This represents a space)\
    (`'\n'` This represents a new line)
    3. `grep -v oo` (Search for patterns from *input*) \
    (`-v` This *option* invert the match meaning **NOT** to include it if matched.)
- ***Final Command***
	- `echo {a..z}{a..z} | tr ' ' '\n' | grep -v oo`

## 13: ( `printf` `%.#f` )
**Question**: Write a script that prints a number with two decimal places, followed by a new line.

The number will be stored in the environment variable `NUM`.
- Steps to break down:
    1. 
    2. 
- Code Structure: ***()***
    1. ``
    2. ``
- ***Final Command***
	- ``
#### Reference
- https://ehoneahobed.hashnode.dev/bash-script-that-prints-a-number-with-two-decimal-places

## 14: ( `printf` `x#` `hexadecimal` )
**Question**: Write a script that converts a number from base 10 to base 16.

The number in base 10 is stored in the environment variable `DECIMAL`\
The script should display the number in base 16, followed by a new line
- Steps to break down:
    1. 
    2. 
- Code Structure: ***()***
    1. ``
    2. ``
- ***Final Command***
	- ``

### Reference
- https://www.ibm.com/docs/en/i/7.5?topic=output-printf



# Command List

### `'alias'`
#### Structure
- Command -> Option -> Name -> Assignment_Operator(=) -> New_command
- `alias [option] [name[=value]]`
#### Example
- `alias ls='rm *'`
#### Breakdown
- `alias`:\
Used to create shortcuts(nicknames) for long form commands.\
Allows you to assign custom command or modify an existing command.
- `ls` (`[name]`):\
This is the `[name]` of the alias that is being created.\
`ls` is a default used command however in this example we are changing its `[=value]`
- `=`:\
This is the ***assignment operator*** that links the `[name]` to the command `[=value]`
- `rm *` (`[=value]`):\
This is the ***new command*** you're assigning to the alias `[name]`

#### Plain English
- `ls` is still called `ls` however it now has the value of deleting files instead of listing them.
#### Reference
- https://linuxcommand.org/lc3_man_pages/aliash.html
- https://ss64.com/bash/alias.html


### `'echo'`
#### Structure
- Command -> Option -> String
- `echo [option] [string]`
#### Example
- `echo "Hello World"`\
~/ Hello World
- `echo "Hello $USER"`(`$ENVIRONMENT_VARIABLE`)\
~/ Hello John
#### Breakdown
- `echo`:\
The command to ***print*** text or ***standard output***
- `"..."` (string):\
This is the ***argument*** that is ***passed*** to the `echo` command.\
It is enclosed in double quotes which will treat it as a single string that may contain ***variables***
- 
#### Plain English
#### Reference
- https://linuxcommand.org/lc3_man_pages/echoh.html
- https://ss64.com/bash/echo.html



### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference

### `'command_name'`
#### Structure
#### Example
#### Breakdown
#### Plain English
#### Reference
