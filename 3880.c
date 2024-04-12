void fun()
{
  int entity_1 = 68;
  char entity_0[7] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_9 = 'N';
  memset(entity_0, 'y', 7-1);
  entity_0[7-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_0);
}