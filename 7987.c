void fun()
{
  int entity_6 = 95;
  int entity_9 = 7;
  int entity_2 = 95;
  entity_6 = 13;
  char entity_4[42] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_8;
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memset(entity_4, 'c', 42-1);
  entity_4[42-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  strcpy(entity_8, entity_4);
}