void fun()
{
  int entity_4 = 36;
  entity_4 = 70;
  char entity_3[19] = "";
  char* entity_9;
  char entity_6[79] = "";
  char* entity_8;
  memset(entity_6, 'M', 79-1);
  entity_6[79-1]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'l', 19-1);
  entity_3[19-1]='0';
  strcpy(entity_8, entity_3);
}