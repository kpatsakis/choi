void fun()
{
  int entity_6 = 55;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 94-1);
  entity_7[94-1]='';
  entity_7[entity_6] = 'H';
}