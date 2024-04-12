void fun()
{
  int entity_4 = 26;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_9 = 'H';
  char entity_8[42] = "";
  entity_8 = NULL;
  memset(entity_3, 'T', entity_4-1);
  entity_3[entity_4-1]='';
  memset(entity_8, 'S', 42-1);
  entity_8[42-1]='';
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  entity_4 = 81;
  strcpy(entity_5, entity_3);
}