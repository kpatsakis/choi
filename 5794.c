void fun()
{
  int entity_7 = 32;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'l', entity_7-1);
  entity_8[entity_7-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  strcpy(entity_1, entity_8);
}