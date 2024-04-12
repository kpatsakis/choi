void fun()
{
  int entity_3 = 36;
  char entity_7 = 'T';
  char entity_4[29] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 29-1);
  entity_4[29-1]='';
  entity_4[entity_3] = 'V';
}