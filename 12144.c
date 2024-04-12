void fun()
{
  int entity_7 = 10;
  int entity_2 = 36;
  char entity_0[entity_7] = "";
  char entity_5 = 'I';
  char* entity_8;
  memset(entity_0, 'i', entity_7-1);
  entity_0[entity_7-1]='0';
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_0, entity_7*sizeof(char));
}