void fun()
{
  int entity_4 = 56;
  char entity_8[entity_4] = "";
  char entity_2 = 'f';
  char* entity_5;
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'A', entity_4-1);
  entity_8[entity_4-1]='0';
  memcpy(entity_5, entity_8, entity_4*sizeof(char));
}