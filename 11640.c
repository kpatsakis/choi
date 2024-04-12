void fun()
{
  char* entity_8;
  char entity_2 = 'p';
  char* entity_4;
  char entity_6[29] = "";
  entity_8 = (char*)malloc(51*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'e', 29-1);
  entity_6[29-1]='0';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_8, entity_6, 29*sizeof(char));
}