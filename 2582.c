void fun()
{
  int entity_3 = 49;
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  memset(entity_9, 'J', entity_3-1);
  entity_9[entity_3-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  entity_3 = 47;
  strcpy(entity_1, entity_9);
}