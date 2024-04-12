void fun()
{
  int entity_9 = 38;
  char entity_8[74] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 74-1);
  entity_8[74-1]='';
  entity_8[entity_9] = 'w';
}