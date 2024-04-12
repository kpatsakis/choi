void fun()
{
  int entity_0 = 40;
  char entity_4 = 'w';
  char entity_2[7] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_1[91] = "";
  entity_1 = NULL;
  memset(entity_1, 't', 91-1);
  entity_1[91-1]='';
  memset(entity_2, 't', 7-1);
  entity_2[7-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_2);
}