void fun()
{
  char entity_5[60] = "";
  entity_5 = NULL;
  memset(entity_5, 'n', 60-1);
  entity_5[60-1]='';
  entity_5[37] = 'l';
}