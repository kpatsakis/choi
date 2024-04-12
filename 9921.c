void fun()
{
  int entity_7 = 58;
  entity_7 = 42;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'J', entity_7-1);
  entity_6[entity_7-1]='';
  entity_6[37] = 'y';
}