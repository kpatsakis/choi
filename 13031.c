void fun()
{
  int entity_6 = 10;
  char entity_1[entity_6] = "";
  char* entity_4;
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'P', entity_6-1);
  entity_1[entity_6-1]='0';
  entity_6 = 68;
  memcpy(entity_4, entity_1, entity_6*sizeof(char));
}