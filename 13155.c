void fun()
{
  int entity_2 = 22;
  char* entity_4;
  char entity_0[29] = "";
  memset(entity_0, 'w', 29-1);
  entity_0[29-1]='0';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[0]='0';
  entity_2 = 66;
  memcpy(entity_4, entity_0, 29*sizeof(char));
}