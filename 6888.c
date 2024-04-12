void fun()
{
  int entity_1 = 89;
  char entity_0[74] = "";
  entity_0 = NULL;
  memset(entity_0, 'f', 74-1);
  entity_0[74-1]='';
  entity_0[entity_1] = 'a';
}