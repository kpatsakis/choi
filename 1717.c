void fun()
{
  int entity_1 = 24;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_4;
  entity_9 = (char*)malloc(69*sizeof(char));
  entity_9[69-1]='';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  memset(entity_3, 'a', entity_1-1);
  entity_3[entity_1-1]='';
  strcpy(entity_9, entity_3);
}