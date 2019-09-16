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
# ./a.out 'Test/CodeGenerationTests/if_else_loops.c' 'Test/CodeGenerationTests/function_call.c' 'Test/CodeGenerationTests/arrays.c' 'Test/CodeGenerationTests/func.c' 'Test/CodeGenerationTests/exp.c' 'Test/CodeGenerationTests/loop.c'
./a.out 'input.c'
