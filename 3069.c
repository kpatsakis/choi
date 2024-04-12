void fun()
{
  int entity_8 = 77;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_9[85] = "";
  entity_9 = NULL;
  memset(entity_2, 'K', entity_8-1);
  entity_2[entity_8-1]='';
  memset(entity_9, 'N', 85-1);
  entity_9[85-1]='';
  entity_8 = 56;
  entity_2[75] = 'z';
}