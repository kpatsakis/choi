void fun()
{
  int entity_4 = 34;
  entity_4 = 61;
  char entity_0 = 'I';
  char entity_3[65] = "";
  char entity_6[13] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 't', 13-1);
  entity_6[13-1]='0';
  memset(entity_3, 't', 65-1);
  entity_3[65-1]='0';
  strcpy(entity_2, entity_6);
}