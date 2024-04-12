void fun()
{
  int entity_6 = 51;
  char* entity_1;
  char* entity_3;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  memset(entity_9, 'v', entity_6-1);
  entity_9[entity_6-1]='';
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[54-1]='';
  entity_6 = 43;
  strcpy(entity_3, entity_9);
}