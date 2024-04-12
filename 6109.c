void fun()
{
  int entity_3 = 81;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'f', entity_3-1);
  entity_8[entity_3-1]='';
  entity_3 = 69;
  entity_8[95] = 'V';
}