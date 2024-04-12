void fun()
{
  char entity_5[8] = "";
  entity_5 = NULL;
  memset(entity_5, 'K', 8-1);
  entity_5[8-1]='';
  entity_5[78] = 'E';
}