void fun()
{
  int entity_7 = 30;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_8 = 'H';
  memset(entity_9, 'd', 88-1);
  entity_9[88-1]='';
  memset(entity_4, 'Z', entity_7-1);
  entity_4[entity_7-1]='';
  entity_4[72] = 'I';
}