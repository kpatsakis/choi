void fun()
{
  int entity_9 = 54;
  char entity_6[58] = "";
  entity_6 = NULL;
  memset(entity_6, 'D', 58-1);
  entity_6[58-1]='';
  entity_6[entity_9] = 'D';
}