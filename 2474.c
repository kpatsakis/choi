void fun()
{
  int entity_8 = 44;
  int entity_3 = 41;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 23;
  entity_1[70] = 'r';
}