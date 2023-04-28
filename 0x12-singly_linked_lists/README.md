<h1>Singly Linked Lists Tasks</h1>
<p>This repository contains my solutions to the Singly Linked Lists Tasks.</p>
<h2>Overview</h2>
<p>
    This project is a collection of functions that perform operations on a singly linked list. 
    The tasks are part of the curriculum of the ALX Software Engineering program.
</p>
<h2>Tasks</h2>
<ol>
    <li>
        <h3>Print list</h3>
        <p>
            Write a function that prints all the elements of a <code>list_t</code> list.
        </p>
        <p>
            <strong>Prototype:</strong> <code>size_t print_list(const list_t *h);</code>
        </p>
        <p>
            <strong>Return:</strong> the number of nodes<br>
            <strong>Format:</strong> see example
        </p>
        <p>
            If str is NULL, print [0] (nil)<br>
            You are allowed to use printf
        </p>
    </li>
    <li>
        <h3>List length</h3>
        <p>
            Write a function that returns the number of elements in a <code>list_t</code> list.
        </p>
        <p>
            <strong>Prototype:</strong> <code>size_t list_len(const list_t *h);</code>
        </p>
    </li>
    <li>
        <h3>Add node</h3>
        <p>
            Write a function that adds a new node at the beginning of a <code>list_t</code> list.
        </p>
        <p>
            <strong>Prototype:</strong> <code>list_t *add_node(list_t **head, const char *str);</code>
        </p>
        <p>
            <strong>Return:</strong> the address of the new element, or NULL if it failed<br>
            <code>str</code> needs to be duplicated<br>
            You are allowed to use <code>strdup</code>
        </p>
    </li>
    <li>
        <h3>Add node at the end</h3>
        <p>
            Write a function that adds a new node at the end of a <code>list_t</code> list.
        </p>
        <p>
            <strong>Prototype:</strong> <code>list_t *add_node_end(list_t **head, const char *str);</code>
        </p>
        <p>
            <strong>Return:</strong> the address of the new element, or NULL if it failed<br>
            <code>str</code> needs to be duplicated<br>
            You are allowed to use <code>strdup</code>
        </p>
    </li>
    <li>
        <h3>Free list</h3>
        <p>
            Write a function that frees a <code>list_t</code> list.
        </p>
        <p>
            <strong>Prototype:</strong> <code>void free_list(list_t *head);</code>
        </p>
    </li>
</ol>
<h2>Testing</h2>
<p>
    The repository contains a main file for each function in the respective file that should be compiled with your code. 
    You can also use your own tests to verify your implementation.
</p>
<h2>Author</h2>
<p>This project is completed by me, Tam-BobManuel, as part of the curriculum
