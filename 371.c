void fun()
{
  int entity_1 = 6;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_2;
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  memset(entity_9, 'F', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 80;
  strcpy(entity_0, entity_9);
}