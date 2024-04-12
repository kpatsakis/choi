void fun()
{
  int entity_6 = 91;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_1[0] = "";
  entity_1 = NULL;
  memset(entity_7, 'V', entity_6-1);
  entity_7[entity_6-1]='';
  memset(entity_1, 'Z', 0-1);
  entity_1[0-1]='';
  entity_6 = 76;
  entity_7[60] = 'w';
}