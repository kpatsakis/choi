void fun()
{
  int entity_5 = 39;
  int entity_1 = 75;
  char* entity_0;
  char entity_4[59] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_4, 'S', 59-1);
  entity_4[59-1]='';
  strcpy(entity_0, entity_4);
}