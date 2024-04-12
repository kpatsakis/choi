void fun()
{
  int entity_4 = 90;
  char* entity_1;
  char entity_3[52] = "";
  char entity_7 = 'f';
  char entity_0[56] = "";
  memset(entity_0, 'b', 56-1);
  entity_0[56-1]='0';
  memset(entity_3, 'd', 52-1);
  entity_3[52-1]='0';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  entity_4 = 26;
  strcpy(entity_1, entity_3);
}