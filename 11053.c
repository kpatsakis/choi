void fun()
{
  int entity_0 = 85;
  char* entity_3;
  char entity_7[37] = "";
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'F', 37-1);
  entity_7[37-1]='0';
  memcpy(entity_3, entity_7, 37*sizeof(char));
}