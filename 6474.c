void fun()
{
  int entity_6 = 87;
  entity_6 = 44;
  char entity_8 = 'J';
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_5[45] = "";
  entity_5 = NULL;
  memset(entity_9, 'I', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_5, 'W', 45-1);
  entity_5[45-1]='';
  memset(entity_7, 'u', 33-1);
  entity_7[33-1]='';
  entity_9[63] = 'y';
}