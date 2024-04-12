void fun()
{
  int entity_9 = 39;
  int entity_1 = 94;
  char entity_4[1] = "";
  entity_4 = NULL;
  char entity_3 = 'z';
  char entity_6[93] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', 93-1);
  entity_6[93-1]='';
  memset(entity_4, 'a', 1-1);
  entity_4[1-1]='';
  entity_6[entity_1] = 'L';
}