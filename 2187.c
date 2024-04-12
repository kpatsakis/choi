void fun()
{
  int entity_7 = 60;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char entity_1[34] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', 34-1);
  entity_1[34-1]='';
  memset(entity_0, 'r', entity_7-1);
  entity_0[entity_7-1]='';
  entity_0[34] = 'U';
}