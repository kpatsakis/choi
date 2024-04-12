void fun()
{
  char entity_5[41] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', 41-1);
  entity_5[41-1]='';
  entity_5[13] = 'i';
}