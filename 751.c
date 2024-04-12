void fun()
{
  int entity_8 = 79;
  char entity_7[93] = "";
  entity_7 = NULL;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', entity_8-1);
  entity_1[entity_8-1]='';
  memset(entity_7, 'A', 93-1);
  entity_7[93-1]='';
  entity_1[65] = 'e';
}