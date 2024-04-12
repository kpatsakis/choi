void fun()
{
  int entity_7 = 40;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_9, 't', 88-1);
  entity_9[88-1]='';
  memset(entity_6, 'M', entity_7-1);
  entity_6[entity_7-1]='';
  entity_6[93] = 'I';
}