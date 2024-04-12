void fun()
{
  int entity_5 = 12;
  char entity_2[74] = "";
  char* entity_4;
  char entity_8 = 'l';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'L', 74-1);
  entity_2[74-1]='0';
  entity_5 = 84;
  memcpy(entity_4, entity_2, 74*sizeof(char));
}