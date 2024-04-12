void fun()
{
  int entity_3 = 12;
  char entity_0[56] = "";
  char* entity_7;
  char entity_8[61] = "";
  char entity_4 = 'A';
  memset(entity_0, 'i', 56-1);
  entity_0[56-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'r', 61-1);
  entity_8[61-1]='0';
  memcpy(entity_7, entity_8, 61*sizeof(char));
}