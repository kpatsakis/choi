void fun()
{
  int entity_7 = 49;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'm', entity_7-1);
  entity_6[entity_7-1]='';
  entity_6[31] = 'k';
}