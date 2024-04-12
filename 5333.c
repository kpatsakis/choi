void fun()
{
  char entity_0[65] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', 65-1);
  entity_0[65-1]='';
  entity_0[71] = 'g';
}