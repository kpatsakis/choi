void fun()
{
  int entity_5 = 63;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'm', entity_5-1);
  entity_8[entity_5-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  strcpy(entity_1, entity_8);
}