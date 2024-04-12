void fun()
{
  char entity_5[11] = "";
  entity_5 = NULL;
  memset(entity_5, 'P', 11-1);
  entity_5[11-1]='';
  entity_5[55] = 'n';
}