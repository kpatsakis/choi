void fun()
{
  int entity_3 = 44;
  int entity_9 = 96;
  entity_9 = 13;
  char entity_1[17] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_7[66] = "";
  entity_7 = NULL;
  memset(entity_1, 'T', 17-1);
  entity_1[17-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_7, 'h', 66-1);
  entity_7[66-1]='';
  strcpy(entity_0, entity_1);
}