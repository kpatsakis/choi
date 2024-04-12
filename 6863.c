void fun()
{
  int entity_0 = 9;
  entity_0 = 53;
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_7, 'V', 13-1);
  entity_7[13-1]='';
  memset(entity_1, 'D', entity_0-1);
  entity_1[entity_0-1]='';
  entity_1[35] = 'h';
}