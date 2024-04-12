void fun()
{
  int entity_9 = 14;
  char entity_3 = 'l';
  char entity_6[87] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_6, 'R', 87-1);
  entity_6[87-1]='';
  entity_9 = 53;
  strcpy(entity_0, entity_6);
}