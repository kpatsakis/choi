void fun()
{
  int entity_1 = 13;
  char* entity_6;
  char* entity_4;
  char entity_9[55] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_9, 'D', 55-1);
  entity_9[55-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  entity_1 = 72;
  strcpy(entity_4, entity_9);
}