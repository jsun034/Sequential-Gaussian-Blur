import cv2
import numpy as np
import sys

img = cv2.imread(sys.argv[1])
blur = cv2.GaussianBlur(img,(5,5),0)
cv2.imwrite("output.jpg",blur)







