void fun()
{
  int entity_6 = 2;
  int entity_0 = 68;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_9;
  memset(entity_7, 'p', entity_6-1);
  entity_7[entity_6-1]='';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  strcpy(entity_9, entity_7);
}