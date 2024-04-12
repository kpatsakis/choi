void fun()
{
  int entity_9 = 2;
  char entity_0[72] = "";
  entity_0 = NULL;
  char entity_1[12] = "";
  entity_1 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char entity_4 = 'a';
  memset(entity_1, 'E', 12-1);
  entity_1[12-1]='';
  memset(entity_2, 'T', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_0, 'G', 72-1);
  entity_0[72-1]='';
  entity_2[33] = 'e';
}