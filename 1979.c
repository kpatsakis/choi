void fun()
{
  int entity_9 = 35;
  char entity_5[36] = "";
  entity_5 = NULL;
  char entity_0[62] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_6;
  memset(entity_5, 'L', 36-1);
  entity_5[36-1]='';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_0, 's', 62-1);
  entity_0[62-1]='';
  strcpy(entity_7, entity_5);
}