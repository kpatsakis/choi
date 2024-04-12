void fun()
{
  int entity_9 = 36;
  char entity_2[61] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_6;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_2, 'm', 61-1);
  entity_2[61-1]='';
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[20-1]='';
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  memset(entity_8, 'Y', entity_9-1);
  entity_8[entity_9-1]='';
  entity_9 = 80;
  strcpy(entity_1, entity_8);
}