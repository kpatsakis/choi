void fun()
{
  int entity_9 = 64;
  char* entity_5;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_6;
  char* entity_7;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  memset(entity_0, 'd', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  entity_9 = 37;
  strcpy(entity_5, entity_0);
}