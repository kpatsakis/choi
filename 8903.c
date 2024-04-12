void fun()
{
  int entity_1 = 60;
  char* entity_9;
  char entity_2 = 'P';
  char entity_7[40] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6 = 'H';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_7, 'c', 40-1);
  entity_7[40-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  entity_1 = 17;
  strcpy(entity_9, entity_7);
}