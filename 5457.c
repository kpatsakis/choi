void fun()
{
  int entity_3 = 94;
  int entity_8 = 90;
  char entity_9[25] = "";
  entity_9 = NULL;
  char entity_2 = 'Z';
  char* entity_1;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_9, 'h', 25-1);
  entity_9[25-1]='';
  memset(entity_7, 'F', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  strcpy(entity_1, entity_7);
}