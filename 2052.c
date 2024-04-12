void fun()
{
  int entity_9 = 74;
  char entity_7[18] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_3[46] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_7, 'T', 18-1);
  entity_7[18-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[19-1]='';
  memset(entity_3, 'O', 46-1);
  entity_3[46-1]='';
  strcpy(entity_5, entity_7);
}