void fun()
{
  int entity_2 = 29;
  char entity_0[29] = "";
  char* entity_6;
  memset(entity_0, 'M', 29-1);
  entity_0[29-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  entity_2 = 75;
  memcpy(entity_6, entity_0, 29*sizeof(char));
}