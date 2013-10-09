Linux C Static Module using custom ELF Section
==============================================

This is a simple program that shows how to create static C module using a custom ELF section. This
code is based in the article *Hacking your ELF for fun and profit* by Mitchel Humpherys here:

  http://mgalgs.github.io/2013/05/10/hacking-your-ELF-for-fun-and-profit.html

The program uses a custom ELF section called "modules", and each module is placed in a separate file:

 - module_a.c
 - module_b.c
 - module_c.c
 

--
Eduardo Silva <edsiper@gmail.com>
