void fun()
{
  char entity_0[55] = "";
  entity_0 = NULL;
  char entity_2[15] = "";
  entity_2 = NULL;
  memset(entity_2, 'W', 15-1);
  entity_2[15-1]='';
  memset(entity_0, 'V', 55-1);
  entity_0[55-1]='';
  entity_2[51] = 'U';
}