void fun()
{
  int entity_4 = 62;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'v', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 29;
  entity_7[48] = 'm';
}