void fun()
{
  int entity_5 = 16;
  entity_5 = 19;
  char* entity_4;
  char entity_2 = 'o';
  char entity_3 = 'q';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[91-1]='';
  memset(entity_9, 'G', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_4, entity_9, entity_5*sizeof(char));
}