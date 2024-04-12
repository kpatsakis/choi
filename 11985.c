void fun()
{
  char* entity_8;
  char entity_3[63] = "";
  char* entity_6;
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'D', 63-1);
  entity_3[63-1]='0';
  memcpy(entity_8, entity_3, 63*sizeof(char));
}