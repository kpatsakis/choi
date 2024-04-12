void fun()
{
  int entity_1 = 1;
  char entity_0[27] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', 27-1);
  entity_0[27-1]='';
  entity_0[entity_1] = 'r';
}