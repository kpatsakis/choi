void fun()
{
  int entity_7 = 34;
  char entity_9 = 'Z';
  char entity_8 = 'I';
  char entity_6[49] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', 49-1);
  entity_6[49-1]='';
  entity_7 = 33;
  entity_6[entity_7] = 'q';
}