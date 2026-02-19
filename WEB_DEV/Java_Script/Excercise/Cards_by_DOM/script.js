var num = 0;
function createCard(title, cName, views, monthsOld, duration, thumbnail) {
    // Finish this function
    let card = document.createElement("div");
    // console.log(card);
    card.setAttribute("class", "card")
    let conatiner = document.querySelector(".container");
    conatiner.insertAdjacentElement("beforeend", card);

    let srno = document.createElement("div");
    srno.setAttribute("class", "srno");
    srno.innerText = `${num + 1}`;
    document.querySelectorAll(".card")[num].insertAdjacentElement("afterbegin", srno)

    let Tnail = document.createElement("div");
    Tnail.setAttribute("class", "Tnail");
    document.querySelectorAll(".card")[num].insertAdjacentElement("beforeend", Tnail);

    let img = document.createElement("img")
    img.setAttribute("src", thumbnail);
    img.setAttribute("alt", "thumbnail");
    document.querySelectorAll(".Tnail")[num].insertAdjacentElement("afterbegin", img)

    let dur = document.createElement("div");
    dur.setAttribute("class", "duration");
    dur.innerText = duration;
    document.querySelectorAll(".Tnail")[num].insertAdjacentElement("beforeend", dur);

    let info = document.createElement("div");
    info.setAttribute("class", "info");
    document.querySelectorAll(".card")[num].insertAdjacentElement("beforeend", info);

    let tit = document.createElement("div")
    tit.setAttribute("class", "title");
    tit.innerText = title;
    document.querySelectorAll(".info")[num].insertAdjacentElement("afterbegin", tit);

    let secinfo = document.createElement("div");
    secinfo.setAttribute("class", "secondinfo");
    document.querySelectorAll(".info")[num].insertAdjacentElement("beforeend", secinfo);

    let channel = document.createElement("div");
    channel.setAttribute("class", "channelnam");
    channel.innerHTML = `${cName} •`;
    document.querySelectorAll(".secondinfo")[num].insertAdjacentElement("beforeend", channel)


    let v = document.createElement("div");
    v.setAttribute("class", "views");
    if (views > 1000000000) { views = `${views / 1000000000}B` }
    else if (views > 1000000) { views = `${views / 1000000}M` }
    else if (views > 1000) { views = `${views / 1000}K` }
    // views=Math.round(views*100);
    v.innerHTML = `${views} •`;
    document.querySelectorAll(".secondinfo")[num].insertAdjacentElement("beforeend", v)

    let d = document.createElement("div");
    d.setAttribute("class", "date");
    d.innerHTML = `${monthsOld} months ago`;
    document.querySelectorAll(".secondinfo")[num].insertAdjacentElement("beforeend", d)

    num++;
}

//OR WAY

function createCard_bysir(title, cName, views, monthsOld, duration, thumbnail) {
    let viewStr;
    if (views < 1000) {
        viewStr = views;
    }
    else if (views > 1000000) {
        viewStr = views / 1000000 + "M";
    }
    else {
        viewStr = views / 1000 + "K";
    }
    let html = `<div class="scard">
                    <div class="simage">
                        <img src="${thumbnail}"
                            alt="">
                        <div class="scapsule">${duration}</div>
                    </div>
                    <div class="stext">
                        <h1>${title}</h1>
                        <p>${cName} . ${viewStr} views . ${monthsOld} months ago</p>
                    </div> 
                </div>`;
    document.querySelector(".container").insertAdjacentHTML("beforeend",html);
}


createCard("Introduction to Backend | Sigma Web Dev video #1", "CodeWithHarry", 560000, 7, "31:22", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEcCPYBEIoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLACwWOixJVrKLFindK92kYMgTcQbw")
createCard("Your First HTML Website | Sigma Web Development Course - Tutorial #2", "CodeWithHarry", 2100000, 8, "28:31", "https://i.ytimg.com/vi/kJEsTjH5mVg/hqdefault.jpg?sqp=-oaymwEbCMQBEG5IVfKriqkDDggBFQAAiEIYAXABwAEG&rs=AOn4CLB2CBsdfdhlYA7kZwtSfre44-Wx_g")
createCard("Basic Structure of an HTML Website | Sigma Web Development Course - Tutorial #3", "codewithharry", 1300000, 10, "11:12", "https://i.ytimg.com/vi/BGeDBfCIqas/hqdefault.jpg?sqp=-oaymwEbCMQBEG5IVfKriqkDDggBFQAAiEIYAXABwAEG&rs=AOn4CLAp_n6AvTnI_3IUceTjTT9oO3JklQ")
createCard("hello bridge and over the sea we go #4", "me", 1235254322, 19, "10:21", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQUPIfiGgUML8G3ZqsNLHfaCnZK3I5g4tJabQ&s")
createCard_bysir("hello bridge and over the sea we go #4", "me", 12352522, 19, "10:21", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQUPIfiGgUML8G3ZqsNLHfaCnZK3I5g4tJabQ&s")
