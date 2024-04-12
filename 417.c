void fun()
{
  int entity_7 = 67;
  int entity_6 = 44;
  char entity_1[89] = "";
  entity_1 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_1, 's', 89-1);
  entity_1[89-1]='';
  entity_6 = 22;
  entity_9[76] = 'q';
}