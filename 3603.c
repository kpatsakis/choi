void fun()
{
  char entity_4[77] = "";
  entity_4 = NULL;
  memset(entity_4, 'm', 77-1);
  entity_4[77-1]='';
  entity_4[46] = 'P';
}