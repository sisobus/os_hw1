#!/usr/bin/python
#-*- coding:utf-8 -*-
import sys

with open('input_command','r') as fp:
    commands = fp.read().split(',')
print '\tif ( cmd == %s ) {\n\t\tif ( (e=%s(buf)) > SUCCESS )\n\t\t\tprint_error_message(e);\n\t}'%(commands[0].strip(),'test_'+commands[0].strip().lower()),
for command in commands[1:]:
    command = command.strip()
    print 'else if ( cmd == %s ) {\n\t\tif ( (e=%s(buf)) > SUCCESS )\n\t\t\tprint_error_message(e);\n\t}'%(command,'test_'+command.lower()),
