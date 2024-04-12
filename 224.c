void fun()
{
  int entity_3 = 27;
  int entity_8 = 83;
  int entity_7 = 93;
  char entity_9[56] = "";
  entity_9 = NULL;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', entity_3-1);
  entity_2[entity_3-1]='';
  memset(entity_9, 'n', 56-1);
  entity_9[56-1]='';
  entity_2[84] = 'j';
}