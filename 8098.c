void fun()
{
  int entity_1 = 62;
  entity_1 = 72;
  char entity_6[2] = "";
  entity_6 = NULL;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', entity_1-1);
  entity_5[entity_1-1]='';
  memset(entity_6, 'j', 2-1);
  entity_6[2-1]='';
  entity_5[94] = 'x';
}