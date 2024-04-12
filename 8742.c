void fun()
{
  char entity_2[4] = "";
  entity_2 = NULL;
  memset(entity_2, 'x', 4-1);
  entity_2[4-1]='';
  entity_2[23] = 'f';
}