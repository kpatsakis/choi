void fun()
{
  int entity_3 = 21;
  char entity_4[entity_3] = "";
  char entity_5 = 'U';
  char* entity_8;
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'm', entity_3-1);
  entity_4[entity_3-1]='0';
  memcpy(entity_8, entity_4, entity_3*sizeof(char));
}