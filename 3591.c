void fun()
{
  int entity_1 = 91;
  char entity_9 = 'A';
  char* entity_0;
  char entity_4[35] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_4, 'c', 35-1);
  entity_4[35-1]='';
  strcpy(entity_0, entity_4);
}