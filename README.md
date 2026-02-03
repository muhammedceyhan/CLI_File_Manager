# CLI File Manager

A simple command-line interface file manager written in C. This application allows users to perform basic file operations directly from the terminal.

## Features

- **List Files**: View all files and directories in the current working directory.
- **Create File**: Create a new empty file.
- **Delete File**: Remove an existing file.
- **Rename File**: Rename an existing file.

## Getting Started

### Prerequisites

- A C compiler (GCC recommended)

### Compilation

 To compile the program, open your terminal and run:

```bash
gcc FileManager.c -o FileManager
```

### Usage

Run the compiled executable:

**Windows:**
```powershell
.\FileManager.exe
```

**Linux/macOS:**
```bash
./FileManager
```

## Menu Options

1. **List the Files**: Displays the contents of the current directory.
2. **Create a file**: Prompts for a filename and creates it.
3. **Delete a file**: Prompts for a filename to delete.
4. **Rename a file**: Prompts for the current filename and the new name.
5. **Quit**: Exits the application.

## Note

Ensure you have the necessary permissions to create or modify files in the directory where the application is running.
