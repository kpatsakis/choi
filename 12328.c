void fun()
{
  int entity_3 = 16;
  char* entity_8;
  char entity_6[entity_3] = "";
  memset(entity_6, 'q', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_6, entity_3*sizeof(char));
}