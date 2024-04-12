void fun()
{
  int entity_1 = 33;
  char entity_4[9] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_0 = 'c';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_4, 'Y', 9-1);
  entity_4[9-1]='';
  strcpy(entity_5, entity_4);
}