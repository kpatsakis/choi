void fun()
{
  int entity_5 = 27;
  char entity_1[14] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'H', 14-1);
  entity_1[14-1]='0';
  entity_5 = 1;
  memcpy(entity_8, entity_1, 14*sizeof(char));
}