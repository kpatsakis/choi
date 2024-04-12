void fun()
{
  int entity_1 = 38;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_9[68] = "";
  entity_9 = NULL;
  char entity_6[27] = "";
  entity_6 = NULL;
  memset(entity_6, 'F', 27-1);
  entity_6[27-1]='';
  memset(entity_7, 'R', entity_1-1);
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  memset(entity_9, 'y', 68-1);
  entity_9[68-1]='';
  strcpy(entity_5, entity_7);
}