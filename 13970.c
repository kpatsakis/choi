void fun()
{
  int entity_2 = 70;
  char entity_6[40] = "";
  char* entity_8;
  char entity_7[20] = "";
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'S', 20-1);
  entity_7[20-1]='0';
  memset(entity_6, 'd', 40-1);
  entity_6[40-1]='0';
  entity_2 = 14;
  memcpy(entity_8, entity_7, 20*sizeof(char));
}