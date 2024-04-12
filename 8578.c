void fun()
{
  int entity_4 = 38;
  int entity_5 = 95;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'w', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 10;
  entity_7[22] = 'w';
}