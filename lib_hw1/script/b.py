#!/usr/bin/python
#-*- coding:utf-8 -*-
import sys

with open('input_command','r') as fp:
    commands = fp.read().split(',')
s = 'char command_argument[46][256]={'
for command in commands:
    command = command.strip()
    s += "\""+command.lower()+"\","
s = s[:-1]+'};'
print s
