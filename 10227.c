void fun()
{
  char entity_2[3] = "";
  memset(entity_2, 'b', 3-1);
  entity_2[3-1]='0';
  entity_2[25] = 'a';
}