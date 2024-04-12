void fun()
{
  int entity_1 = 77;
  entity_1 = 77;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_7, 'P', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_8, entity_7);
}