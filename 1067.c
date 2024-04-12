void fun()
{
  char entity_5[63] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', 63-1);
  entity_5[63-1]='';
  entity_5[4] = 'f';
}