void fun()
{
  int entity_0 = 80;
  entity_0 = 80;
  char* entity_8;
  char entity_4[entity_0] = "";
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'p', entity_0-1);
  entity_4[entity_0-1]='0';
  strcpy(entity_8, entity_4);
}