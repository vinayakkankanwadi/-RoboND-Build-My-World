[![Udacity - Robotics NanoDegree Program](https://s3-us-west-1.amazonaws.com/udacity-robotics/Extra+Images/RoboND_flag.png)](https://www.udacity.com/robotics)

# RoboND-Build-My-World
The **Build-My-World** lab part of RoboND Gazebo Basics lesson. The purpose of this lab is to build a robot model with the Model Editor tool in Gazebo. Include this model in an empty Gazebo World. And, finally write a plugin to interact with this world.  

### Directory Structure
```
    .RoboND-Build-My-World             # Build My World Project 
    ├── model                          # Model files 
    │   ├── Building
    │   │   ├── model.config
    │   │   ├── model.sdf
    │   ├── HumanoidRobot
    │   │   ├── model.config
    │   │   ├── model.sdf
    │   ├── table                      # Import table from Gazebo online library Gazebo world
    │   │   ├── model-1_2.sdf
    │   │   ├── model-1_3.sdf
    │   │   ├── model-1_4.sdf
    │   │   ├── model.config
    │   │   ├── model.sdf
    ├── script                         # Gazebo World plugin C++ script      
    │   ├── welcome_message.cpp
    ├── world                          # Gazebo main World containing models 
    │   ├── UdacityOffice.world
    ├── CMakeLists.txt                 # Link libraries 
    └──                              
    
```

### Steps to launch the simulation

#### Step 1 Update and upgrade the Workspace image
```sh
$ sudo apt-get update
$ sudo apt-get upgrade -y
```

#### Step 2 Clone the lab folder in /home/workspace/
```sh
$ cd /home/workspace/
$ git clone https://github.com/vinayakkankanwadi/RoboND-Build-My-World.git RoboND-Build-My-World
```

#### Step 3 Compile the code
```sh
$ cd /home/workspace/RoboND-Build-My-World/
$ mkdir build
$ cd build/
$ cmake ../
$ make
```

#### Step 4 Add the library path to the Gazebo plugin path  
```sh
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/home/workspace/RoboND-Build-My-World/build
```

#### Step 5 Run the Gazebo World file  
```sh
$ cd /home/workspace/RoboND-Build-My-World/world/
$ gazebo UdacityOffice.world
```

### Output
The Welcome world message and the robot inside a Gazebo World should both launch as follow: 
![alt text](https://github.com/vinayakkankanwadi/RoboND-Build-My-World/blob/main/images/output.PNG)


    
 
