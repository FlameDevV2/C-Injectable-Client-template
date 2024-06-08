# a1.2.2b-hacked-client
A "Hacked Client" for Minecraft Alpha 1.2.2b

## About
This is a hacked client for Minecraft Alpha 1.2.2b, allowing you to access various features and modifications not available in the vanilla game.

## Installations
To build and install this hacked client, follow these steps:

1. **Download MCP 2.2a**: https://minecraft.gamepedia.com/Programs_and_editors/Mod_Coder_Pack
2. **Setup MCP**: Drag and drop `a1.2.2b.jar` into the `jars/bin` folder along with `natives` and `lwgl.jar` and other required libraries.
3. **Rename `a1.2.2b.jar` to `minecraft.jar`**: This is required for the hacked client to work properly.
4. **Install JDK 1.6_17 & Add to PATH**: Make sure you have the required Java Development Kit installed and added to your system's PATH.
5. **Replace `conf/methods.csv` with the one provided**: This file is required for the hacked client to function correctly.
6. **Run `Decompile.bat`**: This will decompile the Minecraft source code.
7. **Copy patched source files into `Sources/`**: Move the modified source files into the `Sources` directory.
8. **Run `Recompile.bat`**: This will recompile the Minecraft source code with the modifications.
9. **Add obfuscation mappings**: In `conf/client_obfuscation.txt`, add the following mappings:
10. **Run `reobfs.bat`**: This will apply the obfuscation mappings to the hacked client.

## Usage
Once installed, type `.help` in the chat for information on available commands.

## Contributing
If you'd like to contribute to this project, please see our [CONTRIBUTING.md](CONTRIBUTING.md) file for guidelines.

## License
This project is licensed under the [MIT License](LICENSE.md).

## Credits
Thanks to the Minecraft community and the creators of the Mod Coder Pack for making this project possible.
