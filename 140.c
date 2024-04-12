void fun()
{
  int entity_1 = 90;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[79] = 'n';
}