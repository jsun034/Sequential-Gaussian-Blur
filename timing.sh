#! /bin/bash
echo 'blur flower_300x300'
time python3 blur.py images/flower_300x300.jpg

echo 'blur flower_1000x1000'
time python3 blur.py images/flower_1000x1000.jpg

echo 'blur flower_3000x3000'
time python3 blur.py images/flower_3000x3000.jpg