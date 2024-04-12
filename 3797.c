void fun()
{
  int entity_2 = 63;
  char entity_9[71] = "";
  entity_9 = NULL;
  char entity_3 = 'L';
  char entity_1[64] = "";
  entity_1 = NULL;
  memset(entity_9, 'D', 71-1);
  entity_9[71-1]='';
  memset(entity_1, 'E', 64-1);
  entity_1[64-1]='';
  entity_2 = 48;
  entity_9[entity_2] = 'g';
}