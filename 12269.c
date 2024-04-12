void fun()
{
  int entity_8 = 9;
  char entity_4[29] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'T', 29-1);
  entity_4[29-1]='0';
  memcpy(entity_1, entity_4, 29*sizeof(char));
}