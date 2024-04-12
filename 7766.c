void fun()
{
  int entity_7 = 11;
  char* entity_4;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  memset(entity_8, 'W', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 16;
  strcpy(entity_4, entity_8);
}