import express from 'express';
import mongoose from 'mongoose';
import blogRouter from "./routes/blog-routes";
import router from "./routes/user-routes";
import cors from 'cors';
const app =  express();
app.use(cors());
 
app.use(express.json());


app.use("/api/user",router);
app.use("/api/blog",blogRouter);
mongoose
.connect(
    "mongodb+srv://admin:Sonal@cluster0.p8yas.mongodb.net/Blogapp?retryWrites=true&w=majority"
)
.then(()=>app.listen(6748)).
then(() =>
console.log("Connected to database at localhost 6748")
)
.catch((err)=>console.log(err));


