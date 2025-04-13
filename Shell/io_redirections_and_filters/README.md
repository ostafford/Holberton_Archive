# I/O Redirection and Filters

## 0-hello_world
`echo`	- will print the string (text) that you put in between single or double quotes

## 2-hellofile
`cat`	- concatenate and print files. Effectively will showcase the files content.\
	- You can also display multiple files by incoroprating a space inbetween each file name or location.

## 4-lastlines
`tail`	- display the last part of a file.\
	- That being said the `-n` option will allow you to set the number of lines that you want to view. **Understand that the last line is considered line 1 instead of the last line**

## 5-firstlines
`head`	- Will do the same as `tail` but for the beginning of the file.

## 6-third_line
Pipe (`|`)\
- The pipe allows you to take the output of one command and pass it as input to another command\
	- *eg.* syntax structure `head -n 3 file_name | tail -n 1`\
		- `head -n 3` is like flipping to the first 3 pages of a book.\
		- `tail -n 1` then says, "Give me the last page of these 3 pages."

## 7-file
Redirection *single* (`>`)\
- **The "Redirection"** will pass the *output* before it and write it into the file.\
	- When using **redirection**, it's important to remember that the output will always go to a file and not another command.\
	- To connect or chain multiple commands, use the *pipe* (`|`) operator.\
	- *eg.* syntax structure `echo "Content of the file goes here" > file_name.txt`\
		- `echo "..."` is the command to print/display your text/string\
		- `>` will redirect that command into the file "file_name.txt"\

Redirection *double* (`>>`)\
- Double Redirection (>>) functions similarly to single redirection (>), but instead of overwriting the existing content of a file, it appends or adds new output to the end of the file.


## 9-duplicate-last-line (append/add)
- This is an extension from tasks 6 and 7. I realized that you can run a command and directly redirect its output into a file without needing an additional step to "print" or "write." Using redirection allows you to input the output results straight into a file.
	- *eg.* `ls -la > file_name.txt` would essentially print out the results in the *file_name.txt* file directly./
	*(remember that the single `>` will overwrite the content in the file if any and the `>>` will append (add) the output to the file.)*

## 10-Duplicate_last_line
`find`
- Is a search tool specifically for the command line. It searches through the directory hierarchy (the structure of folders and subfolders) based on the criteria you give it, like file names, types, or sizes.

	-  **Command Structure** *( Command -> Location -> Criteria -> Action )*
	- Example: `find /location -name '*.log' -delete`
   		- Command: `find` (search)
   		- Location: `/home/user`
    		- Criteria: `-name '*.log'` (log files)
    		- Action: `-delete` (deletes each found file)

## 11-directories
`wc`
- "Word Count" It is a command-line utility used to count various statistics from input text (*Lines, Words, Bytes(characters)*)

	-  **Command Structure** *( Command -> Option -> File )*
	- Example: `find ./* -type d -print | wc -l`
		- Command: `wc` the count command
		- Option: `-l` Lines
		- File: `file_name or input from a pipe`

## 12-newest_files
**Question**: Create a script that displays the 10 newest files in the current directory.
- Steps to break down:
	1. Display list/files of current directory
	2. Display the 10 newest
- Code command:
	1. `ls -l` 
	2. `head -n 10`
	3. `ls -l | head -n 10`

## 13-unique `'sort'` `'uniq'`
**Question**: Create a script that takes a list of words as input and prints only words that appear exactly once.
- Steps to break down:
	1. read a list of words in a file
	2. print only words that appear **exactly** once
- Code Command:
	1. `sort` *(The sort utility sorts text and binary files by lines.)*
	2. `uniq -u` *(report or filter out repeated lines in a file)*
		- `-u` *(Only output lines that are not repeated in the input)*
- **Complete Command**
		- `sort | uniq -u`

## 14-findthatword
**Question**: Display lines containing the pattern "root" from the file /etc/passwd
- Steps to break down:
	1. Display lines containing *the pattern* "root"
	2. Location `/etc/passwd`
- Code Command:
	1. `grep "root"`
	2. `/etc/passwd`
- **Complete Command**
	- `grep "root" /etc/passwd`

## 15-countthatword
**Question**: Display the number of lines that contain the pattern "bin" in the file /etc/passwd
- Steps to break down:
	1. Display the number of lines with pattern "bin"
	2. location `/etc/passwd`
- Code Steps:
	1. `grep -c "bin"'
	2. `/etc/passwd`
- **Complete Command**
	- `grep -c "bin" /etc/passwd`

## 16-whatsnext
**Questions**: Display lines containing the pattern "root" and 3 lines after them in the file /etc/passwd
- Steps to break down:
	1. Display pattern "root" and *3 lines after* 
	2. Location `/etc/passwd`
- Code Steps:
	1. `grep -A "root"`
	2. `/etc/passwd`
- **Complete Command**
	- `grep -A "root" /etc/passwd`

## 17-hidethisword
**Question**:
- Steps to break down:
	1.
	2.
- Code Steps:
	1.
	2.
- **Complete Command**
	-

## 18
**Question**: Display all lines of the file /etc/ssh/sshd_config starting with a letter.
- Steps to break down:
    1. Display all lines starting with a letter (A-Z)
    2. Location /etc/ssh/sshd_config
- Code Steps:
    1. `grep [A-Za-z]`
    2. `/etc/ssh/sshd_config`
- **Complete Command**
    - `grep [A-Za-z] /etc/ssh/sshd_config`

## 19
**Question**: Replace all characters A and c from input to Z and e respectively.
- Steps to break down:
    1. Input is "Ac"
    2. Output is "Ze"
- Code Steps:
    1. `tr`
    2. `"Ac" "Ze"`
- **Complete Command**
    - `tr "Ac" "Ze"`

## 20
**Question**: Create a script that removes all letters c and C from input.
- Steps to break down:
    1. Select the input
    2. Remove C and c
- Code Steps:
    1. `grep`
    2. `-d [C,c]`
- **Complete Command**
    - `grep -d [C,c]`

## 21
**Question**: Write a script that reverse its input.
- Steps to break down:
    1. Reverse the input
- Code Steps:
    1. `rev`
- **Complete Command**
    - `rev`
	
## 22: ( `cut` )
**Question**: Write a script that displays all users and their home directories, sorted by users.
- Steps to break down:
    1. Display all users and their home directories
    2. Sort by users
- Code Structure: ***(Command -> Options -> Input File)***
    1. `cut -d":" -f 1,6 /etc/passwd`
		- Options
			- `-d":"` -> 
			- `-f 1,6` -> so cutting is pretty much like selecting the fields that you want to extract.
    2. `sort`
		- 
- **Complete Command**
	- `cut -d":" -f 1,6 /etc/passwd`
