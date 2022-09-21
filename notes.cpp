// How to setup C++ in vscode

  // Step 1: open Developer PowerShell for VScode 2022
  // Step 2: type >code . 
  // Step 3: *VS Code opens*
  // Step 4: New terminal
  // Step 5: Type in terminal >cl.exe  to check if no errors


// How to compile main.cpp in C++

//   Step 1: make sure to have a main.cpp
//   Step 2: go to terminal tab then click on "configure tasks"
//   Step 3: then edit tasks.json "args" to this:
//             "args": [
//   				"-g",
//   				"-std=c++20",
//   				"${workspaceFolder}\\*.cpp",
//   				"-o",
//   				"${fileDirname}\\rooster.exe"
//   			],
//   Step 4: Make sure to click on the main.cpp then go to terminal tab and click "run build task" to compile it 
//   Step 5: you will see the rooster.exe being generated. 

// How to run the compiled file 

//   Step 1: on the terminal tab, click on "new terminal"
//   Step 2: write in the terminal > .\rooster.exe



// How to configure to C++ 20
//   Step 1: on the view tab, click on "command palette"
//   Step 2: then click on "c/c++:Edit configurations((UI)"
//   Step 3: scroll down to the lowest part and choose C++20 


// How to check if all the compilers are ready to use
//   Step 1: Open terminal
//   Step 2: type "cl.exe", "g++ --version", "clang++ --version"
//   Step 3: if no errors, you are good to go