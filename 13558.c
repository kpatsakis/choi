void fun()
{
  int entity_3 = 4;
  entity_3 = 82;
  char* entity_7;
  char entity_1[79] = "";
  char entity_6[51] = "";
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'Y', 51-1);
  entity_6[51-1]='0';
  memset(entity_1, 'x', 79-1);
  entity_1[79-1]='0';
  memcpy(entity_7, entity_6, 51*sizeof(char));
}