void fun()
{
  int entity_2 = 100;
  char entity_4[entity_2] = "";
  char* entity_8;
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'M', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_2 = 41;
  memcpy(entity_8, entity_4, entity_2*sizeof(char));
}