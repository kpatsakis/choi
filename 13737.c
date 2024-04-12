void fun()
{
  int entity_1 = 55;
  entity_1 = 96;
  char* entity_8;
  char entity_5[entity_1] = "";
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'f', entity_1-1);
  entity_5[entity_1-1]='0';
  memcpy(entity_8, entity_5, entity_1*sizeof(char));
}