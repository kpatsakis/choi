void fun()
{
  int entity_0 = 18;
  char* entity_8;
  char entity_3[74] = "";
  memset(entity_3, 'H', 74-1);
  entity_3[74-1]='0';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  entity_0 = 1;
  memcpy(entity_8, entity_3, 74*sizeof(char));
}