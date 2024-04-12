void fun()
{
  int entity_3 = 98;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'r', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[32] = 'Y';
}