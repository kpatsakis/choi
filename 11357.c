void fun()
{
  int entity_9 = 21;
  char entity_3[57] = "";
  char* entity_8;
  char entity_0[65] = "";
  memset(entity_3, 'A', 57-1);
  entity_3[57-1]='0';
  memset(entity_0, 'i', 65-1);
  entity_0[65-1]='0';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}