### Makefiles
* *make* is a utility/software tool used to manage and maintain programs
  consisting of many component files. Like determining which pieces of a large
  program needs to be recompiled and issues commands to do so.

* *make* reads its instructions from *Makefile* 

* Makefiles are used in large programs where regulations are needed for smooth
  operations of the programs and situations where software automation is best.

* *rules* are commands in the Makefile that contains instructions. They contain
  at least one or more targets, and optionally, dependencies and commands.

  *rules* have the format:
  **target**: *dependencies*
  	commands

* *rules* come in two forms; Implicit and Explicit.
  Implicit rules are rules that give commands without actually explicitly
  writing out the commands.
  Explicit rules on the other hand, directly call the commands with their
  targets.

* Useful rules...
