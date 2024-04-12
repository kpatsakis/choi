void fun()
{
  char entity_6[46] = "";
  char* entity_4;
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'F', 46-1);
  entity_6[46-1]='0';
  memcpy(entity_4, entity_6, 46*sizeof(char));
}