void fun()
{
  int entity_0 = 59;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 't', entity_0-1);
  entity_1[entity_0-1]='';
  entity_0 = 11;
  entity_1[63] = 'r';
}