void fun()
{
  int entity_2 = 82;
  char entity_9[57] = "";
  entity_9 = NULL;
  char entity_3[19] = "";
  entity_3 = NULL;
  memset(entity_3, 'K', 19-1);
  entity_3[19-1]='';
  memset(entity_9, 'R', 57-1);
  entity_9[57-1]='';
  entity_2 = 89;
  entity_3[entity_2] = 'L';
}