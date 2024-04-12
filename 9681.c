void fun()
{
  int entity_1 = 19;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_0 = 'r';
  memset(entity_3, 'C', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[68] = 'v';
}