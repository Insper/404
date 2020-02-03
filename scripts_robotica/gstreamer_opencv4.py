import cv2
 
captura = cv2.VideoCapture('v4l2src io-mode=4 ! videoconvert ! video/x-raw, framerate=30/1 ! videoconvert ! appsink', cv2.CAP_GSTREAMER)
 
while(1):
    ret, frame = captura.read()
    cv2.imshow("Video", frame)
   
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break
 
captura.release()
cv2.destroyAllWindows()
