void fun()
{
  char entity_0[41] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', 41-1);
  entity_0[41-1]='';
  entity_0[80] = 'a';
}