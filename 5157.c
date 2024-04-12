void fun()
{
  int entity_2 = 20;
  entity_2 = 42;
  char entity_8 = 'P';
  char entity_9[70] = "";
  entity_9 = NULL;
  char entity_7[34] = "";
  entity_7 = NULL;
  memset(entity_7, 'G', 34-1);
  entity_7[34-1]='';
  memset(entity_9, 'H', 70-1);
  entity_9[70-1]='';
  entity_7[entity_2] = 'k';
}