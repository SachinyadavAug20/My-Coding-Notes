//The Local Storage Manager: You are working on a note-taking app, and you want to implement a function named saveNoteToLocalStorage that takes a note object and saves it to the browser's local storage.
let notes = [], i = 1;
notes[0]="This are your notes :-";
if (localStorage.getItem("Usr_notes") == null) {
    do {
        notes[i] = prompt("enter your note");
        i++;
    } while (notes[i - 1] != null && notes[i-1]!="");
    let json_notes = Object.assign({},notes);

        localStorage.setItem("Usr_notes", JSON.stringify(json_notes));
}

let Notes1 = JSON.parse(localStorage.getItem("Usr_notes")),j=0;
document.querySelectorAll(".heading")[0].innerHTML=Notes1[0];
console.log(Notes1);
for (const key in Notes1) {
    if(key==0){continue;}
    document.querySelectorAll(".notes")[j].innerHTML=Notes1[key];
    j++;
}

