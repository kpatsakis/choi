void fun()
{
  char entity_0[83] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', 83-1);
  entity_0[83-1]='';
  entity_0[31] = 'a';
}