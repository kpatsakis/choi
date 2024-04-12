void fun()
{
  char entity_6[78] = "";
  char* entity_4;
  char entity_8[13] = "";
  memset(entity_6, 'F', 78-1);
  entity_6[78-1]='0';
  memset(entity_8, 'l', 13-1);
  entity_8[13-1]='0';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_6);
}