void fun()
{
  char entity_9[78] = "";
  entity_9 = NULL;
  char entity_8[32] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  memset(entity_9, 'N', 78-1);
  entity_9[78-1]='';
  memset(entity_8, 'P', 32-1);
  entity_8[32-1]='';
  strcpy(entity_6, entity_9);
}