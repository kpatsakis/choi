void fun()
{
  int entity_1 = 41;
  entity_1 = 40;
  char entity_6 = 'X';
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'q', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[87] = 'B';
}