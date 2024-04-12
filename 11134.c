void fun()
{
  char entity_8[3] = "";
  char entity_0[17] = "";
  char* entity_7;
  memset(entity_8, 'U', 3-1);
  entity_8[3-1]='0';
  memset(entity_0, 't', 17-1);
  entity_0[17-1]='0';
  entity_7 = (char*)malloc(68*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}