void fun()
{
  int entity_5 = 21;
  entity_5 = 63;
  char* entity_8;
  char entity_3[70] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'v', 70-1);
  entity_3[70-1]='0';
  memcpy(entity_8, entity_3, 70*sizeof(char));
}