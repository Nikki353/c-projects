ip address :
1. ip a 
2. ip addr
3. ip address
4. if config (works only in runlevel 5)

who am i ---> by this command we can know the present using user name 
whomai ---> by this command we can know the present using user name 

cat /etc/os-release ---> by this command we can know the OS Version and Name of the Operating System . 
cat /etc/redhat-release ---> by this command we can know the OS Version and Name of the Operating System . 

uname -r ---> by this command we can know the OS Kernal Version.
uname -a ---> by this command we can know os-type, hostname, Kernal Version, date of release,Archt...

hostnamectl ---> by this command we can know the OS Version and Name of the Operating System . 
hostname ---> by this command we can see the server or hostname
hostnamectl set-hostname <server-name/hostname of server> this command used for to set the hostname to partuclar server ip address

runlevels :
total runlevels = 0+6
1. runlevel 0 
   init 0 ---> this command is used for shutingdown the server 
2. runlevel 1
   init 1 ---> this command is used for to enter into single user mode
               we can do administrative tasks
3. runlevel 2
   init 2 ---> this runlevel is used for to work withg multi user without network
4. runlevel 3
   init 3 ---> this runlevel is used for working with multi user along with network  
               it is the standered (default) run levels
5. runlevel 4
   init 4 ---> unused and not desigened for user level or it is used for custom purposes
6. runlevel 5
   init 5 ---> it is multi user mode with netorking and graphical user interphase 
7. runlevel 6
   init 6 ---> this command is used for reboot or restart the system safely 
reguler using runlevels : runlevel 0 ,runlevel 3,runlevel 5,runlevel 6

yum ---> by this command we can install/uninstall/update/upgrade/downgrade the packages

#to install Server with GUI 
yum groupinstall "Server with GUI" -y 

tty ---> this command used for to know the present using terminal number 

cat /etc/passwd ---> this command used for to list all existed users list. 

 note:
  users are 3 types:
   1. Root User   ---> plase is 0
   2. System User ---> starts from 1  and ends at 999
   3. Normal User ---> starts from 1000 ends upto 4B (65535)

