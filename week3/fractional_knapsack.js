// by Alexander Nikolskiy

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    terminal: false
});

process.stdin.setEncoding('utf8');

rl.once('line', line => {
    const [itemsCount, knapsackCapacity] = line.toString().split(' ').map(Number);
    const values = [];
    const weights = [];
    let count = 0;

    rl.on('line', line => {
        const [v, w] = readLine(line);
        values.push(v);
        weights.push(w);

        if (++count >= itemsCount) {
            console.log(max(itemsCount, knapsackCapacity, values, weights));
            process.exit();
        }
    });
});

function readLine(line) {
    const v = parseInt(line.toString().split(' ')[0], 10);
    const w = parseInt(line.toString().split(' ')[1], 10);

    return [v, w];
}

function compare(a, b) {
    return a.vow - b.vow
}

function max(count, capacity, values, weights) {
    let countPro = function(obj) {
        return Object.keys(obj).length;
    }

    function compare(a, b) {
        return b.vow - a.vow
    }

    function max(count, capacity, values, weights) {
        let maxvalue = 0;
        let i = 0;
        let vow = [];
        while (i < count) {
            vow.push({ value: values[i], weight: weights[i], vow: values[i] / weights[i] });
            i++;
        }
        vow.sort(compare)
        console.log(vow)
        for (x of vow) {
            if (capacity - x.weight >= 0) {
                capacity -= x.weight;
                maxvalue += x.value;
            } else {
                maxvalue += capacity * x.vow;
                capacity = 0;
                break;
            }
        }
        return maxvalue;

    }
}

module.exports = max;