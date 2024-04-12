void fun()
{
  int entity_2 = 4;
  char entity_4[entity_2] = "";
  char* entity_8;
  memset(entity_4, 'p', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, entity_2*sizeof(char));
}