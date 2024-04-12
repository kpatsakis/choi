void fun()
{
  int entity_3 = 28;
  char entity_9 = 'l';
  char* entity_2;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_1 = 'n';
  memset(entity_0, 'm', entity_3-1);
  entity_0[entity_3-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  strcpy(entity_2, entity_0);
}