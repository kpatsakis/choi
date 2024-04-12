void fun()
{
  int entity_8 = 25;
  int entity_2 = 49;
  entity_8 = 25;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_0;
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[86-1]='';
  memset(entity_1, 'U', entity_8-1);
  entity_1[entity_8-1]='';
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[63-1]='';
  strcpy(entity_4, entity_1);
}