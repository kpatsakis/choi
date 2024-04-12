void fun()
{
  int entity_5 = 93;
  int entity_0 = 58;
  int entity_6 = 36;
  int entity_1 = 51;
  entity_0 = 98;
  char entity_7[entity_0] = "";
  char* entity_8;
  memset(entity_7, 'O', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_8 = (char*)malloc(98*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, entity_0*sizeof(char));
}