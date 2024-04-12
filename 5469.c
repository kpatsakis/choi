void fun()
{
  int entity_4 = 39;
  char entity_5 = 'L';
  char entity_9[48] = "";
  entity_9 = NULL;
  char entity_3[11] = "";
  entity_3 = NULL;
  memset(entity_3, 'z', 11-1);
  entity_3[11-1]='';
  memset(entity_9, 'V', 48-1);
  entity_9[48-1]='';
  entity_9[entity_4] = 'k';
}