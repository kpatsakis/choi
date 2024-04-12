void fun()
{
  int entity_1 = 8;
  char entity_7[92] = "";
  entity_7 = NULL;
  char entity_8[0] = "";
  entity_8 = NULL;
  char entity_9[78] = "";
  entity_9 = NULL;
  memset(entity_7, 'z', 92-1);
  entity_7[92-1]='';
  memset(entity_8, 't', 0-1);
  entity_8[0-1]='';
  memset(entity_9, 'f', 78-1);
  entity_9[78-1]='';
  entity_7[entity_1] = 'p';
}