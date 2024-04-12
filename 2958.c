void fun()
{
  int entity_3 = 64;
  int entity_9 = 84;
  entity_9 = 62;
  char entity_2[30] = "";
  entity_2 = NULL;
  char entity_1[95] = "";
  entity_1 = NULL;
  char entity_8 = 'e';
  memset(entity_2, 'N', 30-1);
  entity_2[30-1]='';
  memset(entity_1, 'D', 95-1);
  entity_1[95-1]='';
  entity_2[entity_9] = 'n';
}