void fun()
{
  int entity_2 = 93;
  int entity_9 = 29;
  entity_9 = 29;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_3[43] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'V', 43-1);
  entity_3[43-1]='';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  memset(entity_8, 'n', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_6, entity_8);
}