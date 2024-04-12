void fun()
{
  char entity_4[86] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 86-1);
  entity_4[86-1]='';
  entity_4[22] = 'm';
}