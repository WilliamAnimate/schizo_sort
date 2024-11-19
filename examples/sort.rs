use schizo_sort::{try_schizo_sort, schizo_sort};

fn main() {
    let input   = vec![12, 4, 2139248, -69, 42, 0];
    let try_out = try_schizo_sort(input.clone()).expect("got Err").expect("got None");
    let out     = schizo_sort(input);

    dbg!(&try_out, &out);
    assert_eq!(try_out, out, "uhoh...");
}
