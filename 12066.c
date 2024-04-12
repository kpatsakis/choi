void fun()
{
  int entity_5 = 79;
  char* entity_2;
  char entity_7[12] = "";
  char entity_4[29] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'E', 29-1);
  entity_4[29-1]='0';
  memset(entity_7, 'h', 12-1);
  entity_7[12-1]='0';
  memcpy(entity_2, entity_4, 29*sizeof(char));
}