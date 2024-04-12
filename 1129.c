void fun()
{
  int entity_6 = 12;
  int entity_5 = 56;
  entity_6 = 58;
  char entity_3[58] = "";
  entity_3 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_3, 't', 58-1);
  entity_3[58-1]='';
  memset(entity_9, 'O', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[64] = 'g';
}