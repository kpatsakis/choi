void fun()
{
  int entity_1 = 82;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_5;
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  memset(entity_7, 'F', entity_1-1);
  entity_7[entity_1-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  entity_1 = 92;
  strcpy(entity_5, entity_7);
}