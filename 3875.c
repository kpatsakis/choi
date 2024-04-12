void fun()
{
  int entity_0 = 1;
  int entity_9 = 62;
  char* entity_5;
  char entity_3[22] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_3, 'd', 22-1);
  entity_3[22-1]='';
  strcpy(entity_5, entity_3);
}