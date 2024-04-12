void fun()
{
  int entity_0 = 52;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'M', entity_0-1);
  entity_4[entity_0-1]='';
  entity_8 = (char*)malloc(17*sizeof(char));
  entity_8[17-1]='';
  strcpy(entity_8, entity_4);
}