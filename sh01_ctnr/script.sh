#!/bin/bash

<<comment

mkdir sh01_intra_repository
mkdir sh01_testing_environment_directory

mkdir sh01_intra_repository/ex01
cp sh01_testing_environment_directory/ex01/print_groups.sh sh01_intra_repository/ex01/
echo -e "cd sh01_testing_environment_directory/ex01
FT_USER=ubuntu
bash print_groups.sh"

mkdir sh01_intra_repository/ex02
cp sh01_testing_environment_directory/ex02/find_sh.sh sh01_intra_repository/ex02/
mkdir sh01_testing_environment_directory/ex02/testing_directory
cp sh01_testing_environment_directory/ex02/find_sh.sh\
 sh01_testing_environment_directory/ex02/testing_directory/find_sh.sh
touch sh01_testing_environment_directory/ex02/testing_directory/file1.sh
touch sh01_testing_environment_directory/ex02/testing_directory/file2.sh
mkdir sh01_testing_environment_directory/ex02/testing_directory/subdir1
touch sh01_testing_environment_directory/ex02/testing_directory/subdir1/file3.sh
mkdir sh01_testing_environment_directory/ex02/testing_directory/subdir1/subsubdir1/file4.sh
echo "cd sh01_testing_environment_directory/ex02/testing_directory
bash find_sh.sh"

mkdir sh01_intra_repository/ex03
cp sh01_testing_environment_directory/ex03/find_sh.sh sh01_intra_repository/ex03/
mkdir sh01_testing_environment_directory/ex03/testing_directory
touch sh01_testing_environment_directory/ex03/testing_directory/file1.txt
touch sh01_testing_environment_directory/ex03/testing_directory/file2.txt
mkdir sh01_testing_environment_directory/ex03/testing_directory/subdir1
touch sh01_testing_environment_directory/ex03/testing_directory/subdir1/file3.txt
touch sh01_testing_environment_directory/ex03/testing_directory/subdir1/file4.txt
mkdir sh01_testing_environment_directory/ex03/testing_directory/subdir2
touch sh01_testing_environment_directory/ex03/testing_directory/subdir2/file5.txt
touch sh01_testing_environment_directory/ex03/testing_directory/subdir2/file6.txt
mkdir sh01_testing_environment_directory/ex03/testing_directory/subdir2/subsubdir1
touch sh01_testing_environment_directory/ex03/testing_directory/subdir2/subsubdir1/file7.txt
touch sh01_testing_environment_directory/ex03/testing_directory/subdir2/subsubdir1/file8.txt
cp sh01_testing_environment_directory/ex03/find_sh.sh\
 sh01_testing_environment_directory/ex03/testing_directory/find_sh.sh
echo "cd sh01_testing_environment_directory/ex03/testing_directory
 bash find_sh.sh"

mkdir sh01_intra_repository/ex04
cp sh01_testing_environment_directory/ex04/MAC.sh sh01_intra_repository/ex04/
echo "cd sh01_testing_environment_directory/ex04
bash MAC.sh"

mkdir sh01_intra_repository/ex05
echo "42" > "sh01_testing_environment_directory/ex05/\"\\?\$*'MaRViN'*\$?\\\""
chmod 614 "sh01_testing_environment_directory/ex05/\"\\?\$*'MaRViN'*\$?\\\""
touch -m -t 202310021221.00 "sh01_testing_environment_directory/ex05/\"\\?\$*'MaRViN'*\$?\\\""
cp "sh01_testing_environment_directory/ex05/\"\\?\$*'MaRViN'*\$?\\\""\
 "sh01_intra_repository/ex05/\"\\?\$*'MaRViN'*\$?\\\""
touch -m -t 202310021221.00 "sh01_intra_repository/ex05/\"\\?\$*'MaRViN'*\$?\\\""

mkdir sh01_intra_repository/ex06
cp sh01_testing_environment_directory/ex06/skip.sh sh01_intra_repository/ex06/
mkdir sh01_testing_environment_directory/ex06/testing_directory
touch sh01_testing_environment_directory/ex06/testing_directory/file1.txt
touch sh01_testing_environment_directory/ex06/testing_directory/file2.txt
touch sh01_testing_environment_directory/ex06/testing_directory/file3.txt
mkdir sh01_testing_environment_directory/ex06/testing_directory/subdir1
mkdir sh01_testing_environment_directory/ex06/testing_directory/subdir2
cp sh01_testing_environment_directory/ex06/skip.sh\
 sh01_testing_environment_directory/ex06/testing_directory/skip.sh

mkdir sh01_intra_repository/ex07
cp sh01_testing_environment_directory/ex07/r_dwssap.sh sh01_intra_repository/ex07/
echo -e "cd sh01_testing_environment_directory/ex07
clear && export FT_LINE1=?? && export FT_LINE2=?? && bash r_dwssap.sh"

mkdir sh01_intra_repository/ex08
cp sh01_testing_environment_directory/ex08/add_chelou.sh sh01_intra_repository/ex08/

XXXX

echo sh01_intra_repository/ex08/add_chelou.sh

ls -l
  sh01_intra_repository
  sh01_testing_environment_directory

echo "==================== ls -l sh01_intra_repository/ex08"
ls -l sh01_intra_repository/ex08

comment

clear
echo "cd sh01_testing_environment_directory/ex08
export FT_NBR1=\"\\\\'?\\\"\\\\\\\"'\\\\\" && FT_NBR2=rcrdmddd && bash add_chelou.sh
export FT_NBR1='\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"' && FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo && bash add_chelou.sh
"

