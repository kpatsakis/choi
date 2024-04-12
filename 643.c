void fun()
{
  int entity_1 = 53;
  entity_1 = 46;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_5 = 'x';
  memset(entity_8, 'y', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[92] = 'D';
}