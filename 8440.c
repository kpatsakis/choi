void fun()
{
  int entity_6 = 67;
  entity_6 = 86;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', entity_6-1);
  entity_8[entity_6-1]='';
  entity_8[67] = 'D';
}