void fun()
{
  char* entity_2;
  char* entity_6;
  char entity_9[24] = "";
  memset(entity_9, 'X', 24-1);
  entity_9[24-1]='0';
  entity_6 = (char*)malloc(29*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_6, entity_9, 24*sizeof(char));
}