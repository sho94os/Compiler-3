bison -d -y 1605103.y
echo '1'
g++ -w -c -o y.o y.tab.c
echo '2'
flex 1605103.l
echo '3'
g++ -w -c -o l.o lex.yy.c
# if the above command doesn't work try g++ -fpermissive -w -c -o l.o lex.yy.c
echo '4'
g++ -o a.out y.o l.o -ly
echo '5'
#./a.out 'Test/input0.c' 'Test/input1.c' 'Test/input2.c' 'Test/input3.c' 'Test/input4.c' 'Test/input5.c'
./a.out 'Test/input1.c'