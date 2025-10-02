As part of my Spring2025 Mentorship with Out in Tech, I created a Family Tree program in C++.
This program goes beyond what other programs allow you to do in terms of depicting a diverse range of relationships such as children of divorce, children of different parents, and polyamory.

The tree is visualized using the GraphViz library. 

Below is an example of a family tree created using this program, which depicts some familiar characters and some made up ones.
<img width="525" height="535" alt="FTProgramGraphExample1_Spiderman" src="https://github.com/user-attachments/assets/d4aaf78d-5b5d-487a-931a-f5996b9e8dc9" />

As you can see, Peter, Wade and Mary Jane are all in a polyamorous relationship. This is depicted by them being grouped together in a light pink box. They don't all share the same children, however. Peter's children consist of Anne Parker and Rose Vera Garcia. Mary Jane does not have any children. Wade's children are Eliana P. Garcia and Rose Vera Garcia. Peter and Wade are both parents to Rose Vera Garcia, so they both get an arrow pointing to Rose.

Now, let's say Peter and Wade still shared Rose Vera Garcia as their child, but Peter and Wade were not together whether that be because they were never married or got divorced. In that case, the graph would look like this:
<img width="596" height="607" alt="FTProgramGraph_ChildofDivorceEX" src="https://github.com/user-attachments/assets/435b90dc-c587-430d-91ab-5f3355179087" />

You can see Peter and Wade still both have an arrow pointing to Rose to indicate they are their child, but Wade is no longer included in that pink box that indicates a relationship. 
