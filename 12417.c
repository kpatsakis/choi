void fun()
{
  int entity_2 = 49;
  char entity_4[entity_2] = "";
  char* entity_8;
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'K', entity_2-1);
  entity_4[entity_2-1]='0';
  memcpy(entity_8, entity_4, entity_2*sizeof(char));
}