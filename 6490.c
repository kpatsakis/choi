void fun()
{
  int entity_3 = 27;
  int entity_5 = 19;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_8 = 'P';
  memset(entity_6, 'V', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[89] = 'r';
}