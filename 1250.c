void fun()
{
  int entity_6 = 9;
  entity_6 = 80;
  char entity_1 = 'Q';
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[51] = 'n';
}