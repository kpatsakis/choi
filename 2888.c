void fun()
{
  int entity_5 = 51;
  entity_5 = 10;
  char entity_1[91] = "";
  entity_1 = NULL;
  char entity_6 = 'i';
  memset(entity_1, 'J', 91-1);
  entity_1[91-1]='';
  entity_1[entity_5] = 'A';
}