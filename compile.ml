open Printf
open Expr
open Asm

let rec find ls x =
  match ls with
  | [] -> None
  | (y,v)::rest ->
    if y = x then Some(v) else find rest x

let stackloc si = RegOffset(-4 * si, ESP)

let true_const = HexConst(0xFFFFFFFE)
let false_const = HexConst(0x7FFFFFFE)

let rec well_formed_e (e : expr) (env : (string * int) list) : string list =
  match e with
  | ENumber(_)
  | EBool(_) -> []
  (* TODO *)
  | _ -> failwith "Not yet implemented"

let check (e : expr) : string list =
  match well_formed_e e [("input", -1)] with
  | [] -> []
  | errs -> failwith (String.concat "\n" errs)

let rec compile_expr (e : expr) (si : int) (env : (string * int) list) : instruction list =
  (* TODO *)
  failwith "Not yet implemented"

and compile_prim1 op e si env =
  (* TODO *)
  failwith "Not yet implemented"

and compile_prim2 op e1 e2 si env =
  (* TODO *)
  failwith "Not yet implemented"

let compile_to_string prog =
  let _ = check prog in
  let prelude = "  section .text\n" ^
                "  extern error\n" ^
                "  global our_code_starts_here\n" ^
                "our_code_starts_here:\n" in
  let postlude = [IRet]
    (* TODO *) in
  let compiled = (compile_expr prog 1 [("input", -1)]) in
  let as_assembly_string = (to_asm (compiled @ postlude)) in
  sprintf "%s%s\n" prelude as_assembly_string
