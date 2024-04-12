void fun()
{
  int entity_3 = 89;
  int entity_0 = 33;
  char entity_4 = 'S';
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char entity_1[19] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 19-1);
  entity_1[19-1]='';
  memset(entity_8, 'c', entity_0-1);
  entity_8[entity_0-1]='';
  entity_8[89] = 'M';
}