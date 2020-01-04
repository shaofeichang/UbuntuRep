#!/bin/bash
cd /home/csf/thread/
./shced &
cd /home/csf/socket/
./server &
./client &
