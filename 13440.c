void fun()
{
  int entity_5 = 40;
  char* entity_1;
  char entity_8[74] = "";
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'd', 74-1);
  entity_8[74-1]='0';
  entity_5 = 8;
  memcpy(entity_1, entity_8, 74*sizeof(char));
}