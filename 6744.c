void fun()
{
  int entity_2 = 60;
  int entity_5 = 49;
  entity_2 = 46;
  char entity_3[81] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_1[73] = "";
  entity_1 = NULL;
  char entity_7 = 'Z';
  memset(entity_1, 'y', 73-1);
  entity_1[73-1]='';
  memset(entity_3, 'g', 81-1);
  entity_3[81-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memcpy(entity_9, entity_1, 73*sizeof(char));
}