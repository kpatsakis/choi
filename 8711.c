void fun()
{
  int entity_6 = 8;
  char entity_9[87] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 87-1);
  entity_9[87-1]='';
  entity_9[entity_6] = 'l';
}