void fun()
{
  int entity_4 = 48;
  char entity_5 = 'C';
  char entity_2[19] = "";
  char* entity_8;
  char* entity_3;
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'b', 19-1);
  entity_2[19-1]='0';
  entity_4 = 54;
  memcpy(entity_3, entity_2, 19*sizeof(char));
}