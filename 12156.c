void fun()
{
  int entity_0 = 41;
  char* entity_7;
  char entity_4[74] = "";
  memset(entity_4, 'i', 74-1);
  entity_4[74-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 74*sizeof(char));
}