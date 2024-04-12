void fun()
{
  int entity_2 = 19;
  int entity_5 = 66;
  entity_2 = 28;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[56] = 'I';
}