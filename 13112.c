void fun()
{
  int entity_8 = 73;
  int entity_7 = 66;
  int entity_2 = 13;
  entity_8 = 20;
  char entity_4[74] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'r', 74-1);
  entity_4[74-1]='0';
  memcpy(entity_3, entity_4, 74*sizeof(char));
}