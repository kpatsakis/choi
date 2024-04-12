void fun()
{
  int entity_9 = 13;
  entity_9 = 55;
  char entity_0[64] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_7[61] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_7, 'R', 61-1);
  entity_7[61-1]='';
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[6-1]='';
  memset(entity_0, 'h', 64-1);
  entity_0[64-1]='';
  strcpy(entity_5, entity_0);
}