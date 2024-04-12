void fun()
{
  int entity_3 = 83;
  int entity_9 = 58;
  entity_9 = 94;
  char entity_5[63] = "";
  entity_5 = NULL;
  char entity_1[13] = "";
  entity_1 = NULL;
  char entity_8 = 'f';
  memset(entity_1, 't', 13-1);
  entity_1[13-1]='';
  memset(entity_5, 't', 63-1);
  entity_5[63-1]='';
  entity_1[entity_9] = 'I';
}