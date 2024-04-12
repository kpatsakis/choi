void fun()
{
  int entity_5 = 40;
  int entity_4 = 28;
  char entity_6[91] = "";
  entity_6 = NULL;
  char entity_2 = 'T';
  char* entity_9;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_6, 'd', 91-1);
  entity_6[91-1]='';
  strcpy(entity_9, entity_6);
}