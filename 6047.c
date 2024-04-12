void fun()
{
  int entity_2 = 27;
  char entity_1[6] = "";
  entity_1 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'O', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_1, 'U', 6-1);
  entity_1[6-1]='';
  entity_7[14] = 'H';
}