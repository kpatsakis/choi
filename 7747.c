void fun()
{
  int entity_2 = 53;
  int entity_1 = 39;
  entity_1 = 39;
  char entity_4 = 'z';
  char* entity_9;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_8[72] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', 72-1);
  entity_8[72-1]='';
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memset(entity_3, 'a', entity_1-1);
  entity_3[entity_1-1]='';
  strcpy(entity_9, entity_3);
}