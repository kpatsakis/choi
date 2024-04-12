void fun()
{
  int entity_4 = 88;
  char entity_6[7] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', 7-1);
  entity_6[7-1]='';
  entity_6[entity_4] = 'c';
}