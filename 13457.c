void fun()
{
  int entity_0 = 56;
  int entity_1 = 75;
  entity_0 = 29;
  char entity_8[entity_0] = "";
  char* entity_2;
  char entity_5 = 'i';
  memset(entity_8, 'e', entity_0-1);
  entity_8[entity_0-1]='0';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, entity_0*sizeof(char));
}