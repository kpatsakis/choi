void fun()
{
  int entity_1 = 67;
  char* entity_4;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', entity_1-1);
  entity_8[entity_1-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  entity_1 = 100;
  strcpy(entity_4, entity_8);
}