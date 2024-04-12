void fun()
{
  int entity_8 = 77;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', entity_8-1);
  entity_2[entity_8-1]='';
  entity_8 = 51;
  entity_2[60] = 'W';
}