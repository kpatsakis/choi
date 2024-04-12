void fun()
{
  int entity_5 = 69;
  int entity_8 = 46;
  entity_8 = 49;
  char entity_2[entity_8] = "";
  char* entity_4;
  memset(entity_2, 'l', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_4 = (char*)malloc(2*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, entity_8*sizeof(char));
}