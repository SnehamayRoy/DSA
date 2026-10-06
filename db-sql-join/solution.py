-- Tables available (already created and filled for you):
--
--   CREATE TABLE users (
--       id INTEGER PRIMARY KEY,
--       name TEXT NOT NULL
--   )
--
--   CREATE TABLE orders (
--       id INTEGER PRIMARY KEY,
--       user_id INTEGER NOT NULL,
--       product TEXT NOT NULL
--   )
--
-- Run (Ctrl/Cmd+Enter) executes your query; Submit checks it against the tests.

-- TODO: Return user_id, product and the user's name for every order that belongs to a known user.
select o.user_id ,o.product,u.name from users as u join orders as o on u.id = o.user_id;
