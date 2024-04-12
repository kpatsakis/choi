void fun()
{
  int entity_8 = 79;
  char entity_4[entity_8] = "";
  char* entity_5;
  memset(entity_4, 'P', entity_8-1);
  entity_4[entity_8-1]='0';
  entity_5 = (char*)malloc(97*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, entity_8*sizeof(char));
}