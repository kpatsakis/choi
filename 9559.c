void fun()
{
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', 4-1);
  entity_5[4-1]='';
  entity_5[58] = 'V';
}