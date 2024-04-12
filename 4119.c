void fun()
{
  int entity_9 = 68;
  char entity_6[65] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_6, 'x', 65-1);
  entity_6[65-1]='';
  entity_8 = (char*)malloc(5*sizeof(char));
  entity_8[5-1]='';
  memset(entity_3, 'I', 40-1);
  entity_3[40-1]='';
  memset(entity_7, 'p', entity_9-1);
  entity_7[entity_9-1]='';
  memcpy(entity_8, entity_7, entity_9*sizeof(char));
}