void fun()
{
  int entity_0 = 72;
  int entity_4 = 80;
  int entity_2 = 19;
  entity_0 = 87;
  char entity_8[entity_0] = "";
  char* entity_5;
  memset(entity_8, 'I', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, entity_0*sizeof(char));
}