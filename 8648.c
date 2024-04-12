void fun()
{
  int entity_8 = 93;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char entity_1 = 'F';
  memset(entity_2, 'm', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[14] = 'F';
}