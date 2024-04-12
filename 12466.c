void fun()
{
  int entity_1 = 51;
  char entity_8[entity_1] = "";
  char* entity_4;
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'x', entity_1-1);
  entity_8[entity_1-1]='0';
  memcpy(entity_4, entity_8, entity_1*sizeof(char));
}