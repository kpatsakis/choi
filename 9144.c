void fun()
{
  int entity_7 = 94;
  char entity_5[78] = "";
  entity_5 = NULL;
  char entity_2 = 'z';
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_5, 'o', 78-1);
  entity_5[78-1]='';
  memset(entity_9, 'h', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 3;
  entity_9[72] = 'H';
}