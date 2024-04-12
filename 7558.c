void fun()
{
  int entity_0 = 84;
  int entity_3 = 52;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(15*sizeof(char));
  entity_8[15-1]='';
  memset(entity_1, 'w', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 75;
  strcpy(entity_8, entity_1);
}