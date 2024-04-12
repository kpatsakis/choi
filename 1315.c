void fun()
{
  int entity_4 = 79;
  int entity_8 = 45;
  char entity_5 = 'q';
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', entity_4-1);
  entity_9[entity_4-1]='';
  entity_4 = 78;
  entity_9[49] = 'x';
}