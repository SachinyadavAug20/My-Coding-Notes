from flask import Flask

app = Flask(__name__)
with open("index.html","r") as f1:
    data=f1.read()

@app.route("/")
def hello_world():
    return f"{data}"

app.run()

