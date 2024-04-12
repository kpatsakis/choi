void fun()
{
  int entity_8 = 50;
  entity_8 = 50;
  char* entity_9;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_5;
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[27-1]='';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  memset(entity_1, 'q', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_9, entity_1);
}