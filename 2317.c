void fun()
{
  int entity_8 = 12;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[91] = 'M';
}