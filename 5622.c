void fun()
{
  int entity_7 = 22;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'h', entity_7-1);
  entity_2[entity_7-1]='';
  entity_7 = 39;
  entity_2[83] = 'm';
}