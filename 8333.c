void fun()
{
  int entity_3 = 59;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'q', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[54] = 'x';
}