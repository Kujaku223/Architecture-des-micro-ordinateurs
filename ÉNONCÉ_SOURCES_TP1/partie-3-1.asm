.text
ld a
st var1
st var2
shr
shl
sub a
brz fin
temp:
ld b
add inc
st b
ld a
sub b
brz fin
boucle:
ld var1
sub weight
brz temp
st var1
ld var2
sub b
st var2
brz s2
br boucle
s2:
ld weight
st result
fin:
stop
.data
a: 0 // Remplacez 0 par la valeur de  3 + |(MATR ETU 1 + MATR ETU 2) % 21|
b: 1
var1: 0
var2: 0
weight: 1
inc: 2
result: 0