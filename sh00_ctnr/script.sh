#!/bin/bash

<<comment

mkdir sh00_intra_repository/ex00
echo Z > sh00_intra_repository/ex00/z

mkdir sh00_intra_repository/ex01
touch sh00_intra_repository/ex01/testShell00
echo "012345678901234567890123456789012345678" > sh00_intra_repository/ex01/testShell00
chmod 455 sh00_intra_repository/ex01/testShell00
touch -m -t 202306012342.00 sh00_intra_repository/ex01/testShell00
tar -cf sh00_intra_repository/ex01/testShell00.tar sh00_intra_repository/ex01/testShell00
chmod 755 sh00_intra_repository/ex01/testShell00
rm sh00_intra_repository/ex01/testShell00

mkdir sh00_intra_repository/ex02
mkdir sh00_intra_repository/ex02/test0
chmod 715 sh00_intra_repository/ex02/test0
touch -m -t 202306012047.00 sh00_intra_repository/ex02/test0
ln -s test0 sh00_intra_repository/ex02/test6
touch -h -t 202306012220.00 sh00_intra_repository/ex02/test6
touch sh00_intra_repository/ex02/test1
echo "012" > sh00_intra_repository/ex02/test1
touch -m -t 202306012146.00 sh00_intra_repository/ex02/test1
chmod 714 sh00_intra_repository/ex02/test1
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

mkdir sh00_intra_repository/ex03
ssh-keygen
cp ~/.ssh/id_rsa.pub sh00_intra_repository/ex03/id_rsa_pub

mkdir sh00_intra_repository/ex04
echo "ls -p -m -t" > sh00_intra_repository/ex04/midLS

mkdir sh00_intra_repository/ex05
touch sh00_intra_repository/ex05/git_commit.sh
echo -e "#!/bin/bash\n\ngit log -n 5 --pretty=format: \"%H\"" > sh00_intra_repository/ex05/git_commit.sh
ls -l sh00_intra_repository/ex05
cat -e sh00_intra_repository/ex05/git_commit.sh
bash sh00_intra_repository/ex05/git_commit.sh

mkdir sh00_intra_repository/ex06
touch sh00_intra_repository/ex06/git_ignore.sh
echo -e "#!/bin/bash\n\ngit ls-files --other --ignored --exclude-standard -c" > sh00_intra_repository/ex06/git_ignore.sh
cat -e sh00_intra_repository/ex06/git_ignore.sh

mkdir sh00_intra_repository/ex07
mkdir sh00_ex07_testing_environment_folder
touch sh00_ex07_testing_environment_folder/source.txt
echo -e "2\n4\n8\n16\n32\n64\n128" > sh00_ex07_testing_environment_folder/source.txt
cat -e sh00_ex07_testing_environment_folder/source.txt
cp sh00_ex07_testing_environment_folder/source.txt sh00_ex07_testing_environment_folder/original.txt
cp sh00_ex07_testing_environment_folder/source.txt sh00_ex07_testing_environment_folder/modified.txt
echo -e "2\n4\n8\n10\n12\n14\n16\nthirty_two\n128" > sh00_ex07_testing_environment_folder/modified.txt
cat -e sh00_ex07_testing_environment_folder/modified.txt
diff sh00_ex07_testing_environment_folder/original.txt sh00_ex07_testing_environment_folder/modified.txt > sh00_ex07_testing_environment_folder/original.diff
cat -e sh00_ex07_testing_environment_folder/original.diff
[cd sh00_ex07_testing_environment_folder]
patch sh00_ex07_testing_environment_folder/original.txt < sh00_ex07_testing_environment_folder/original.diff
cat -e sh00_ex07_testing_environment_folder/original.txt

mkdir sh00_intra_repository/ex08
touch sh00_intra_repository/ex08/clean
echo "find . \( -name "*~.*" -o -name "#*#" -o -name "#*#.*" -o -name "*~" \) -print" > sh00_intra_repository/ex08/clean
cat -e sh00_intra_repository/ex08/clean
mkdir sh00_ex08_testing_environment_folder
rmdir -r sh00_ex08_testing_environment_folder/test_0
rmdir -r sh00_ex08_testing_environment_folder/test_1
rmdir -r sh00_ex08_testing_environment_folder/test_1/test_2
mkdir sh00_ex08_testing_environment_folder/test_0
mkdir sh00_ex08_testing_environment_folder/test_1
mkdir sh00_ex08_testing_environment_folder/test_1/test_2
rm sh00_ex08_testing_environment_folder/*.txt
touch sh00_ex08_testing_environment_folder/test_3~.txt
touch sh00_ex08_testing_environment_folder/test_4.txt
touch sh00_ex08_testing_environment_folder/test_1/#test_5#.txt
touch sh00_ex08_testing_environment_folder/test_1/test_2/#test_6.type#
touch sh00_ex08_testing_environment_folder/test_7.txt
touch sh00_ex08_testing_environment_folder/test_1/test_8.txt~
touch sh00_ex08_testing_environment_folder/test_9.txt
touch sh00_ex08_testing_environment_folder/test_10.txt
touch sh00_ex08_testing_environment_folder/test_11.txt
touch sh00_ex08_testing_environment_folder/test_12.txt

mkdir sh00_intra_repository/ex09
touch sh00_intra_repository/ex09/magic
echo -e "42      string  42      42 file" > sh00_intra_repository/ex09/magic
cat -e sh00_intra_repository/ex09/magic
mkdir sh00_ex09_testing_environment_folder
echo -e "01234567890123456789012345678901234567890142" > sh00_ex09_testing_environment_folder/test.txt
touch sh00_ex09_testing_environment_folder/magic
echo -e "42      string  42      42 file" > sh00_ex09_testing_environment_folder/magic
file -m sh00_ex09_testing_environment_folder/magic sh00_ex09_testing_environment_folder/test.txt

ls -fl sh00_intra_repository
ls -dl sh00_intra_repository/ex*

comment

clear
mkdir sh00_intra_repository/ex04
echo "ls -p -m -t" > sh00_intra_repository/ex04/midLS
echo sh00_intra_repository/ex04/midLS
ls -l sh00_intra_repository/ex04

