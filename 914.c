void fun()
{
  int entity_2 = 2;
  int entity_9 = 28;
  char* entity_8;
  char entity_0[5] = "";
  entity_0 = NULL;
  char entity_6[93] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 't', 93-1);
  entity_6[93-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 'm', 5-1);
  entity_0[5-1]='';
  strcpy(entity_8, entity_0);
}