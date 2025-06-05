var TimeLimitedCache = function () {
    this.cache = new Map();
};

TimeLimitedCache.prototype.set = function (key, value, duration) {
    const exists = this.cache.has(key);
    if (exists) clearTimeout(this.cache.get(key).ref);
    this.cache.set(key, {
        value,
        ref: setTimeout(() => this.cache.delete(key), duration)
    });
    return exists;
};

TimeLimitedCache.prototype.get = function (key) {
    return this.cache.has(key) ? this.cache.get(key).value : -1;
};

TimeLimitedCache.prototype.count = function () {
    return this.cache.size;
};

/**
 * const timeLimitedCache = new TimeLimitedCache()
 * timeLimitedCache.set(1, 42, 1000); // false
 * timeLimitedCache.get(1) // 42
 * timeLimitedCache.count() // 1
 */