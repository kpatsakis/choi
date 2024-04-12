void fun()
{
  int entity_6 = 11;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'E', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[12] = 'h';
}