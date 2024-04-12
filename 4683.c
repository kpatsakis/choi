void fun()
{
  int entity_7 = 20;
  char* entity_5;
  char* entity_1;
  char* entity_4;
  char entity_9[89] = "";
  entity_9 = NULL;
  char entity_8 = 'F';
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[73-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_9, 'k', 89-1);
  entity_9[89-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  strcpy(entity_1, entity_9);
}