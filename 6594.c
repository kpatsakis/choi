void fun()
{
  int entity_3 = 11;
  int entity_5 = 8;
  char entity_9 = 'z';
  char entity_1[54] = "";
  entity_1 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_1, 'f', 54-1);
  entity_1[54-1]='';
  entity_2[4] = 'o';
}