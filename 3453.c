void fun()
{
  int entity_9 = 24;
  entity_9 = 24;
  char entity_4[66] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_7, 'v', entity_9-1);
  entity_7[entity_9-1]='';
  memset(entity_4, 'L', 66-1);
  entity_4[66-1]='';
  strcpy(entity_6, entity_7);
}