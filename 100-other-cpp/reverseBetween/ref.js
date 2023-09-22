class Stack {
    A;
    constructor(A = []) {
        this.A = [...A];
    }
    get size() {
        return this.A.length;
    }
    get length() {
        return this.size();
    }
    push(x) {
        this.A.push(x);
        return x;
    }
    pop = () => this.A.pop();
    peek = () => this.A[this.size - 1];
    top = () => this.peek();
}

var reverseBetween = function (head, left, right) {
    let stack = new Stack();

    let temp = head;
    let n = 1;
    while (n < left) {
        temp = temp.next;
        n++;
    }

    let leftP = temp;
    // console.log(n, temp.val, leftP);

    while (n <= right) {
        stack.push(temp);
        temp = temp.next;
        n++;
    }

    let halfStackSize = Math.trunc(stack.size / 2);

    // console.log(n, leftP, stack.A, stack.size, halfStackSize);

    while (halfStackSize && leftP) {
        let top = stack.pop();
        [top.val, leftP.val] = [leftP.val, top.val];
        leftP = leftP.next;
        halfStackSize--;
    }

    return head;
};

var reverseBetween___2 = function (head, left, right) {
    let temp = head;

    let done = false;

    let leftP = null;
    let stack = new Stack();

    let rec = (temp, n) => {
        if (!temp) {
            return;
        }

        if (n < left) {
            rec(temp.next, n + 1);
            return;
        }
        if (n > right) {
            return;
        }

        stack.push(temp);
        if (n >= left) {
            if (!leftP) {
                leftP = temp;
            }
            rec(temp.next, n + 1);
        }

        if (stack.size && leftP && !done) {
            // console.log("returning", leftP, stack.A, done);

            let top = stack.pop();
            if (leftP === top || leftP.next === top) {
                done = true;
            }

            let tempVal = leftP.val;
            leftP.val = top.val;
            top.val = tempVal;

            leftP = leftP.next;
            // console.log(leftP, stack.A);
        }
    };
    rec(temp, 1);

    return head;
};
