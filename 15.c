void fun()
{
  int entity_8 = 61;
  char entity_4[14] = "";
  entity_4 = NULL;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_7;
  memset(entity_4, 'W', 14-1);
  entity_4[14-1]='';
  memset(entity_2, 'v', entity_8-1);
  entity_2[entity_8-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  strcpy(entity_7, entity_2);
}