## ESP8266 Example

## How to use

- Install Visual Studio Code
- Install the PlatformIO Visual Studio Code Extension
- Clone this repositroy
- Import the project in PlatformIO Home

Create the file `include\credentials.h` with the following content:

```cpp
#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#define WIFI_SSID "<your-ssid>"
#define WIFI_PW "<your-password>"

#endif // CREDENTIALS_H
```

This file is ignored from git (see `.gitignore`) so you do not leak your wifi credentials.
