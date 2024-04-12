void fun()
{
  int entity_7 = 5;
  int entity_1 = 75;
  char entity_3 = 'c';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_8;
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  memset(entity_4, 'v', entity_7-1);
  entity_4[entity_7-1]='';
  strcpy(entity_9, entity_4);
}