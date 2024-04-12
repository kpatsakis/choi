void fun()
{
  char entity_4[23] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', 23-1);
  entity_4[23-1]='';
  entity_4[86] = 'K';
}