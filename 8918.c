void fun()
{
  int entity_3 = 31;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'd', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[19] = 'T';
}