# Project Overview

This project contains scripts for learning and practicing CRUD (Create, Read, Update, Delete) operations in MongoDB. The `crud.mongodb.js` file includes examples of inserting, finding, updating, and deleting documents in a MongoDB database.

## Key Files

*   `crud.mongodb.js`: This file contains a series of MongoDB shell commands for performing CRUD operations. It demonstrates how to use `insertOne`, `insertMany`, `find`, `findOne`, `updateOne`, `updateMany`, and `deleteOne`.
*   `index.js`: This file is currently empty and does not seem to be used.
*   `package.json`: This is a basic `package.json` file and does not contain any dependencies or scripts.

## Usage

The `crud.mongodb.js` script is intended to be executed within the MongoDB shell.

To use this script:

1.  Start the MongoDB shell (`mongosh`).
2.  Load the script using the `load()` function:

    ```sh
    load("crud.mongodb.js")
    ```

This will execute the commands in the script and perform the CRUD operations on the `CRUDdb` database.
