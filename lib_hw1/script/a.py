#!/usr/bin/python
#-*- coding:utf-8 -*-
import sys

with open('input_command','r') as fp:
    commands = fp.read().split(',')
for command in commands:
    command = command.strip()
    print 'error_number test_'+command.lower()+'(char* buf);'
