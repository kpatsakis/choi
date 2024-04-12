void fun()
{
  int entity_1 = 42;
  int entity_2 = 70;
  char entity_4[53] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_9[23] = "";
  entity_9 = NULL;
  memset(entity_4, 'C', 53-1);
  entity_4[53-1]='';
  memset(entity_9, 't', 23-1);
  entity_9[23-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  strcpy(entity_8, entity_9);
}