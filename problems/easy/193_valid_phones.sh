#!/bin/bash

# Date: Jun 15, 2023
# Problem link: https://leetcode.com/problems/valid-phone-numbers/
# Diff: Easy
# Problem: Read from the file file.txt and output all valid phone numbers to stdout.
grep -E "^(\([0-9]{3}\) |[0-9]{3}-)[0-9]{3}-[0-9]{4}$" file.txt
