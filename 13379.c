void fun()
{
  int entity_5 = 92;
  int entity_3 = 27;
  int entity_8 = 51;
  entity_3 = 12;
  char* entity_1;
  char entity_6[74] = "";
  char entity_7 = 'h';
  memset(entity_6, 'R', 74-1);
  entity_6[74-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 74*sizeof(char));
}