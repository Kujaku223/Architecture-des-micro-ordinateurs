.text
ld a
st i
st sum1
terme1:
ld i
brz temp
sub weight
st i
add sum1 
st sum1
br terme1
temp:
ld a
st j
mul a
st sum2
terme2:
ld j
brz fin
sub weight
st j
mul j
add sum2
st sum2
br terme2
fin:
ld sum1
mul sum1
sub sum2
st result
stop
.data
a: 0 // // Remplacez 0 par la valeur de 3 + |(MATR ETU 1 + MATR ETU 2) % 13|
weight: 1
sum1: 0
sum2: 0
i: 0
j: 0
result: 0