Main goal

I implemented this interpretor in C to achieve the Corewar Project. The 3 parts of the project are : asm, vm (virtual machine), and champions. The final goal is to make fight differents champions in a virtual arena ( virtual machine ), and by the way you have to make the strongest champion among the groups. The champions are just files with " .s " extension.

My duty was to design the asm. (I will explain it after)
Skills tested

    This is the last project in C of the first year in EPITECH.
    The main purpose of this project is to make the assurance that you have sucessfully learned the advanced concepts of C.
    This part of the project is testing your skills in test-unit and variables/memory mastering, i will explain it later.

Concept

This part of the program is designed to take a file in parameter : ./asm [YourFile].s In [Yourfile].s instructions will be written instructions that are understandable and readable by human but not by Virtual machine ( other part of the project ). The main purpose of the assembleur is to convert theses instructions to a binary file understandable by the virtual machine

To explain it much clearly the scenario will be : [Yourfile].s => [Yourfile].cor (understandable by the machine)

The weakness of these conversion is to be able to handle every test and error that can be written in the [YourFile].s, this is pretty simple to put somes non-sense instruction that can break asm execution. So to put it simple, test unit is a very large part of the work, strong and readable algorithm is also a part of the development but the test unit is still the biggest part in the work.
Conclusion

This project help me to master, every aspect of the C language in term of "error managing". This was a good project to see your programming skills.