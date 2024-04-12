void fun()
{
  int entity_2 = 94;
  int entity_9 = 98;
  char* entity_3;
  char entity_8[39] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_6[5] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[38-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_8, 'B', 39-1);
  entity_8[39-1]='';
  memset(entity_6, 'D', 5-1);
  entity_6[5-1]='';
  strcpy(entity_3, entity_6);
}