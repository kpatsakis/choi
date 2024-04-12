void fun()
{
  int entity_9 = 34;
  entity_9 = 34;
  char entity_7[18] = "";
  entity_7 = NULL;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_0;
  char* entity_6;
  memset(entity_5, 'w', entity_9-1);
  entity_5[entity_9-1]='';
  memset(entity_7, 'T', 18-1);
  entity_7[18-1]='';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  strcpy(entity_0, entity_5);
}