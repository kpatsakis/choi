void fun()
{
  int entity_9 = 44;
  int entity_4 = 30;
  int entity_8 = 46;
  char entity_7[68] = "";
  entity_7 = NULL;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_7, 'c', 68-1);
  entity_7[68-1]='';
  memset(entity_1, 'k', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 77;
  entity_1[11] = 'y';
}