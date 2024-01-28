#!/bin/bash

<<comment

mkdir sh01_intra_repository/ex01
echo -e "#!/bin/bash\n\nid -G -n $FT_USER | \"sed/ /,/g\" | tr -d \"\\\n\"" > sh01_intra_repository/ex01/print_groups.sh
cat -e sh01_intra_repository/ex01/print_groups.sh

mkdir sh01_intra_repository/ex02
echo -e "#!/bin/bash\n\nfind . -name \"*.sh\" -exec basename {} .sh \\;" > sh01_intra_repository/ex02/find_sh.sh
echo sh01_intra_repository/ex02/find_sh.sh

mkdir sh01_intra_repository/sh01_ex02_testing_environment_folder
touch sh01_intra_repository/sh01_ex02_testing_environment_folder/test1.sh
mkdir sh01_intra_repository/sh01_ex02_testing_environment_folder/test2
touch sh01_intra_repository/sh01_ex02_testing_environment_folder/test2/test3.sh
find  sh01_intra_repository/sh01_ex02_testing_environment_folder -name "*.sh" -exec basename {} .sh \;

mkdir sh01_intra_repository/ex03
echo -e "#!/bin/bash\n\nfind . -type f -o -type d | wc -l | bc" > sh01_intra_repository/ex03/find_sh.sh

cp -r sh01_intra_repository/sh01_ex02_testing_environment_folder sh01_intra_repository/sh01_ex03_testing_environment_folder

find sh01_intra_repository/sh01_ex03_testing_environment_folder/ -type f -o -type d
find sh01_intra_repository/sh01_ex03_testing_environment_folder/ -type f -o -type d | wc -l | bc

mkdir sh01_intra_repository/ex04
echo -e "#!/bin/bash\n\nifconfig | grep ether | cut -c 15-31 | rev" > sh01_intra_repository/ex04/MAC.sh

mkdir sh01_intra_repository/ex05
echo "42" > "sh01_intra_repository/ex05/\"\\?\$*'MaRViN'*\$?\\\""

mkdir sh01_intra_repository/ex06
echo -e "#!/bin/bash\n\nls -l | awk \"NR%2==1\"" > sh01_intra_repository/ex06/skip.sh

mkdir sh01_intra_repository/ex07
rm sh01_intra_repository/ex07/r_dwssap.sh
echo -e "#!/bin/bash\n\ncat /etc/passwd | grep --invert-match \"^#\" | sed -n \"p;n\" | cut -d : -f 1 | rev | sort -r | awk \"NR>=\$FT_LINE1 && NR<=\$FT_LINE2\" | tr \"\\\n\" | sed 's/,/, /g' | sed 's/, $/./'" > sh01_intra_repository/ex07/r_dwssap.sh

mkdir sh01_intra_repository/sh01_ex07_testing_environment_folder
echo -e "1\n2\n4\n8\n16" > sh01_intra_repository/sh01_ex07_testing_environment_folder/passwd.txt

mkdir sh01_intra_repository/ex08
echo -e "#!/bin/bash\n\necho \$FT_NBR1 + \$FT_BNR2 | sed 's/\\\\\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed \"s/\\'/0/g\" | sed \"s/\\\"/2/g\" | tr \"mrdoc\" \"01234\" | xargs echo \"ibase=5; obase=13;\" | bc | tr \"0123456789ABC\" \"gtaio luSnemf\"" > sh01_intra_repository/ex08/add_chelou.sh
echo sh01_intra_repository/ex08/add_chelou.sh

ls -fl sh01_intra_repository/
ls -dl sh01_intra_repository/ex*

comment

clear

