void fun()
{
  int entity_0 = 2;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'y', entity_0-1);
  entity_1[entity_0-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  strcpy(entity_8, entity_1);
}