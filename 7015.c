void fun()
{
  int entity_9 = 87;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_8[79] = "";
  entity_8 = NULL;
  memset(entity_3, 'O', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_8, 'A', 79-1);
  entity_8[79-1]='';
  entity_9 = 53;
  entity_3[90] = 'H';
}