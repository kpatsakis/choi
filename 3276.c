void fun()
{
  int entity_9 = 48;
  int entity_3 = 79;
  entity_9 = 53;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_8[24] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 24-1);
  entity_8[24-1]='';
  memset(entity_6, 't', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[93] = 'I';
}