void fun()
{
  int entity_8 = 10;
  char* entity_7;
  char entity_1[entity_8] = "";
  memset(entity_1, 'q', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_7 = (char*)malloc(39*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, entity_8*sizeof(char));
}