void fun()
{
  int entity_1 = 3;
  char entity_0 = 'i';
  char* entity_4;
  char* entity_5;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  memset(entity_9, 's', entity_1-1);
  entity_9[entity_1-1]='';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  strcpy(entity_4, entity_9);
}