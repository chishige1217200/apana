./a.out < 1-2.txt > logs/1-2.log 2> logs/trash.log
./a.out < 1-4.txt > logs/1-4.log 2> logs/trash.log
./a.out < 1-8.txt > logs/1-8.log 2> logs/trash.log
./a.out < 1-16.txt > logs/1-16.log 2> logs/trash.log
./a.out < 2-2.txt > logs/2-2.log 2> logs/trash.log
./a.out < 2-4.txt > logs/2-4.log 2> logs/trash.log
./a.out < 2-8.txt > logs/2-8.log 2> logs/trash.log
./a.out < 2-16.txt > logs/2-16.log 2> logs/trash.log
echo 1-2
cat logs/1-2.log
echo 1-4
cat logs/1-4.log
echo 1-8
cat logs/1-8.log
echo 1-16
cat logs/1-16.log
echo 2-2
cat logs/2-2.log
echo 2-4
cat logs/2-4.log
echo 2-8
cat logs/2-8.log
echo 2-16
cat logs/2-16.log
