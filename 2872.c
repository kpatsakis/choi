void fun()
{
  char entity_0[31] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', 31-1);
  entity_0[31-1]='';
  entity_0[69] = 'M';
}