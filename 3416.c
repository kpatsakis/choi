void fun()
{
  int entity_7 = 92;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[17] = 'R';
}