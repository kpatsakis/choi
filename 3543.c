void fun()
{
  int entity_3 = 93;
  int entity_0 = 17;
  char entity_9[11] = "";
  entity_9 = NULL;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_9, 'i', 11-1);
  entity_9[11-1]='';
  memset(entity_5, 'J', 85-1);
  entity_5[85-1]='';
  entity_9[entity_3] = 'c';
}