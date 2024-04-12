void fun()
{
  int entity_8 = 6;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'K', entity_8-1);
  entity_6[entity_8-1]='';
  entity_8 = 58;
  entity_6[86] = 'f';
}