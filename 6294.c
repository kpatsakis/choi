void fun()
{
  int entity_5 = 84;
  entity_5 = 84;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  memset(entity_1, 'b', entity_5-1);
  entity_1[entity_5-1]='';
  strcpy(entity_3, entity_1);
}