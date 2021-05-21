
#[no_mangle]
pub extern "C" fn hello_from_rust() -> i32 {
    println!("hello world");
    let n = unsafe {impled(5)};
    println!("c++ implementation of mult: 5*2 = {}", n);
    0
}

extern "C" {
    fn impled(x: i32) -> i32;
}

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}
