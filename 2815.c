void fun()
{
  int entity_7 = 30;
  entity_7 = 85;
  char* entity_9;
  char entity_0[81] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_1[79] = "";
  entity_1 = NULL;
  memset(entity_0, 's', 81-1);
  entity_0[81-1]='';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_1, 'I', 79-1);
  entity_1[79-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  strcpy(entity_5, entity_0);
}