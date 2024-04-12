void fun()
{
  int entity_9 = 83;
  char entity_7[7] = "";
  entity_7 = NULL;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', entity_9-1);
  entity_8[entity_9-1]='';
  memset(entity_7, 'B', 7-1);
  entity_7[7-1]='';
  entity_8[26] = 'i';
}