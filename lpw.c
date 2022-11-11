=begin

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

=end
=cut

print "Hello World\n";
use warnings;
use strict;
my $DATA;
my $del;

$DATA=<>;
print "\n$DATA";
print"Enter the character you want to delete: ";
$del=<>;
print "\n$del";
$DATA=~tr/["$del"]+//d;
print "\n$DATA";

















