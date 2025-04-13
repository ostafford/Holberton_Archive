# Permissions

## 0-iam_betty(user)
	- `su` 	-> Substitute user identity. Meaning that this is how you switch users via shell.
	- Command structure
		-> `su [user_name]`

## 1-who_am_i
	- `whoami`	-> is the command that will print the current user.

## 2-groups
	- `groups`	-> will print the group of the current user that is logged in
	`groups [user_name]`	-> will print the group that `user_name` is part of.

## 3-new_owner
	- `chown`	-> will change the file owner and group
	- Command structure
		-> `chown [user_name:group_name] [file_name]`

## 4-empty
	- `touch`	-> will create an empty file. It will also not open in a program either.
	- Command Structure
		-> `touch [file_name] (You can also add on the type eg. '.txt' '.md' '.html')

## 5-execute
	- `chmod` -> Will change the file modes or Access Control Lists(ACL)
        - Command Structure
        -> `chmod [mode] [file_name]`
### MODE
This number will corrispond to the permissions (RWX - Read, Write, Execute) (Binary - 111 110 100) (Decimal - 764)
NOTE: When changing or adding a mode, remember that the chmod command will override the current permissions. To avoid losing existing permissions, you need to include them in the updated mode. For example, with 764, the owner has full READ, WRITE, and EXECUTE permissions (rwx), the group has READ and WRITE permissions (rw-), and others have READ access only (r--). If I wanted to give the group EXECUTE permission as well, I would change the mode to 774 (rwx for owner, rwx for group, r-- for others).

SYMBOLIC NOTE:\
Outside of the numeric mode (eg. 755) you can also use **symbolic mode** to achieve the same results 
Example:\

Objects:\
u = User(Owner)\
g = Group\
o = Other\
a = All (shorthand for ugo)\

Permissions:\
r = Read\
w = Write\
x = Execute\ 

Operators:\
+ = Add\
- = Remove\
= = Set\

Syntax Command Structure:\
`chmod [object][operator][permission] file_name


REFERENCE Mode:\
`--reference` will allow you to copy another files permission.\
Command Structure:\
`chmod --reference=[reference_file] [destination_file]`




