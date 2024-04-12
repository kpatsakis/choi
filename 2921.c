void fun()
{
  int entity_9 = 61;
  int entity_4 = 35;
  char entity_1 = 'l';
  char* entity_6;
  char entity_7[36] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'J', 36-1);
  entity_7[36-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  entity_4 = 53;
  strcpy(entity_6, entity_7);
}