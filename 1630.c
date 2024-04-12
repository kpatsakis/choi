void fun()
{
  int entity_1 = 5;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char entity_6 = 'Q';
  memset(entity_8, 'r', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[28] = 'G';
}