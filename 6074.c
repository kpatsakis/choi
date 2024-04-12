void fun()
{
  int entity_3 = 89;
  char entity_9[4] = "";
  entity_9 = NULL;
  char entity_6 = 'z';
  char* entity_7;
  char* entity_0;
  memset(entity_9, 'P', 4-1);
  entity_9[4-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_3 = 86;
  strcpy(entity_7, entity_9);
}