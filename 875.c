void fun()
{
  int entity_3 = 35;
  int entity_1 = 60;
  entity_3 = 3;
  char entity_4[41] = "";
  entity_4 = NULL;
  char entity_0 = 'f';
  char entity_9[36] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'a', 36-1);
  entity_9[36-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_4, 'v', 41-1);
  entity_4[41-1]='';
  strcpy(entity_6, entity_4);
}