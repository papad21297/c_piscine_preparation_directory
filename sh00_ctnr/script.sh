#!/bin/bash

<<comment

mkdir sh00_intra_repository
mkdir sh00_testing_environment_directory

mkdir sh00_intra_repository/ex00
echo Z > sh00_intra_repository/ex00/z

mkdir sh00_intra_repository/ex01
echo "012345678901234567890123456789012345678" > sh00_intra_repository/ex01/testShell00
touch -m -t 202306012342.00 sh00_intra_repository/ex01/testShell00
chmod 455 sh00_intra_repository/ex01/testShell00
mv sh00_intra_repository/ex01/testShell00 .
tar -cf testShell00
mv testShell00.tar sh00_intra_repository/ex01
chmod 755 testShell00
rm testShell00
cp sh00_intra_repository/ex01/testShell00.tar sh00_testing_environment_directory/ex01
tar -xf sh00_testing_environment_directory/ex01/testShell00.tar
mv testShell00 sh00_testing_environment_directory/ex01
rm sh00_testing_environment_directory/ex01/testShell00.tar

mkdir sh00_intra_repository/ex02
mkdir sh00_intra_repository/ex02/test0
touch -m -t 202306012047.00 sh00_intra_repository/ex02/test0
chmod 715 sh00_intra_repository/ex02/test0
ln -s test0 sh00_intra_repository/ex02/test6
touch -h -t 202306012220.00 sh00_intra_repository/ex02/test6
touch sh00_intra_repository/ex02/test1
echo "012" > sh00_intra_repository/ex02/test1
chmod 714 sh00_intra_repository/ex02/test1
touch -m -t 202306012146.00 sh00_intra_repository/ex02/test1
mkdir sh00_intra_repository/ex02/test2
chmod 504 sh00_intra_repository/ex02/test2
touch -m -t 202306012245.00 sh00_intra_repository/ex02/test2
touch sh00_intra_repository/ex02/test3
echo "" > sh00_intra_repository/ex02/test3
chmod 404 sh00_intra_repository/ex02/test3
touch -m -t 202306012344.00 sh00_intra_repository/ex02/test3
ln sh00_intra_repository/ex02/test3 sh00_intra_repository/ex02/test5
touch sh00_intra_repository/ex02/test4
echo "0" > sh00_intra_repository/ex02/test4
chmod 641 sh00_intra_repository/ex02/test4
touch -m -t 202306012343.00 sh00_intra_repository/ex02/test4
cp -r sh00_intra_repository/ex02/* .
tar -cf exo2.tar test*
rm -f test*
rmdir test*
cp exo2.tar sh00_intra_repository/ex02/
rm -f sh00_intra_repository/ex02/test*
sudo rmdir sh00_intra_repository/ex02/test*
tar -xf exo2.tar
rm exo2.tar
sudo mv test* sh00_testing_environment_directory/ex02/

mkdir sh00_intra_repository/ex03
ssh-keygen
cp ~/.ssh/id_rsa.pub sh00_intra_repository/ex03/id_rsa_pub

mkdir sh00_intra_repository/ex04
cp sh00_testing_environment_directory/ex04/midLS sh00_intra_repository/ex04/
touch ~/test.txt
$(cat sh00_testing_environment_directory/ex04/midLS) ~

mkdir sh00_intra_repository/ex05
cp sh00_testing_environment_directory/ex05/git_commit.sh sh00_intra_repository/ex05/git_commit.sh
git clone git@github.com:papad21297/gitdrive sh00_testing_environment_directory/ex05/gitdrive
cp sh00_testing_environment_directory/ex05/git_commit.sh sh00_testing_environment_directory/ex05/gitdrive/git_commit.sh
echo "cd sh00_testing_environment_directory/ex05/gitdrive"

mkdir sh00_intra_repository/ex06
cp sh00_testing_environment_directory/ex06/git_ignore.sh sh00_intra_repository/ex06/
git clone -b next_routing git@github.com:papad21297/next_js_tutorial_for_beginners_from_codevolution.git sh00_testing_environment_directory/ex06/next_routing
cp sh00_testing_environment_directory/ex06/git_ignore.sh sh00_testing_environment_directory/ex06/next_routing/
mv sh00_testing_environment_directory/ex06/next_routing/gitignore.txt sh00_testing_environment_directory/ex06/next_routing/.gitignore

mkdir sh00_intra_repository/ex07
mkdir sh00_testing_environment_directory/ex07
echo -e "2
4
8
16
32
64
128" > sh00_testing_environment_directory/ex07/source.txt
cp sh00_testing_environment_directory/ex07/source.txt sh00_testing_environment_directory/ex07/original.txt
echo -e "2
4
8
10
12
14
16
thirty_two
128" > sh00_testing_environment_directory/ex07/modified.txt
diff sh00_testing_environment_directory/ex07/original.txt sh00_testing_environment_directory/ex07/modified.txt > sh00_testing_environment_directory/ex07/original.diff
echo "cd sh00_testing_environment_directory/ex07"
patch original.diff < original.txt

mkdir sh00_intra_repository/ex08
cp sh00_testing_environment_directory/ex08/clean sh00_intra_repository/ex08
mkdir sh00_testing_environment_directory/ex08/testing_directory
touch sh00_testing_environment_directory/ex08/testing_directory/file1~
touch sh00_testing_environment_directory/ex08/testing_directory/file2.txt
mkdir sh00_testing_environment_directory/ex08/testing_directory/subdir1
mkdir sh00_testing_environment_directory/ex08/testing_directory/subdir1/subsubdir1
mkdir sh00_testing_environment_directory/ex08/testing_directory/subdir2
touch sh00_testing_environment_directory/ex08/testing_directory/subdir1/#file3#
touch sh00_testing_environment_directory/ex08/testing_directory/subdir1/file4~
touch sh00_testing_environment_directory/ex08/testing_directory/subdir1/subsubdir1/file5~
touch sh00_testing_environment_directory/ex08/testing_directory/subdir2/file6~
touch sh00_testing_environment_directory/ex08/testing_directory/subdir2/#file7#
mkdir sh00_testing_environment_directory/ex08/testing_directory
cp -r sh00_testing_environment_directory/ex08/source_directory/* \
sh00_testing_environment_directory/ex08/testing_directory/
echo "cd sh00_testing_environment_directory/ex08"

mkdir sh00_intra_repository/ex09
cp sh00_testing_environment_directory/ex09/ft_magic sh00_intra_repository/ex09/
echo -e "42      string  42      42 file" > sh00_intra_repository/ex09/ft_magic
echo -e "01234567890123456789012345678901234567890142" > sh00_testing_environment_directory/ex09/test.txt
file -m sh00_testing_environment_directory/ex09/ft_magic sh00_testing_environment_directory/ex09/test.txt

XXXX

ls -l sh00_intra_repository
ls -l sh00_testing_environment_directory

comment

clear

