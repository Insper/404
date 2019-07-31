
#!/bin/bash
#Autor Lícia Sales
#30-Jul-2019

./max_performance.sh
cd yolov3
./darknet detector demo cfg/coco.data cfg/yolov3-tiny.cfg yolov3-tiny.weights  -c 1
