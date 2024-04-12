void fun()
{
  int entity_8 = 26;
  entity_8 = 59;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[28] = 'k';
}