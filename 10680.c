void fun()
{
  char entity_2[31] = "";
  memset(entity_2, 'b', 31-1);
  entity_2[31-1]='0';
  entity_2[78] = 'X';
}