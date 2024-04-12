void fun()
{
  int entity_8 = 46;
  char* entity_4;
  char entity_1[entity_8] = "";
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'Q', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_8 = 27;
  memcpy(entity_4, entity_1, entity_8*sizeof(char));
}