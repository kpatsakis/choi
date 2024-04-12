void fun()
{
  int entity_8 = 58;
  int entity_7 = 35;
  int entity_2 = 100;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', entity_2-1);
  entity_1[entity_2-1]='';
  entity_1[55] = 'Q';
}