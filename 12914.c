void fun()
{
  int entity_1 = 32;
  char* entity_4;
  char entity_8[entity_1] = "";
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'q', entity_1-1);
  entity_8[entity_1-1]='0';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}