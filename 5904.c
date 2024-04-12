void fun()
{
  int entity_3 = 41;
  char* entity_6;
  char entity_1 = 'I';
  char* entity_7;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_8 = 'g';
  entity_7 = (char*)malloc(10*sizeof(char));
  entity_7[10-1]='';
  memset(entity_9, 'b', entity_3-1);
  entity_9[entity_3-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  strcpy(entity_7, entity_9);
}