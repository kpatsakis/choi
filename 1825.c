void fun()
{
  int entity_1 = 82;
  char entity_9[1] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_9, 'q', 1-1);
  entity_9[1-1]='';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[50-1]='';
  memset(entity_7, 'R', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_3, entity_7);
}