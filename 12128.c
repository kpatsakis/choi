void fun()
{
  int entity_1 = 60;
  int entity_4 = 46;
  char entity_6[68] = "";
  char entity_8[11] = "";
  char* entity_7;
  memset(entity_8, 't', 11-1);
  entity_8[11-1]='0';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'H', 68-1);
  entity_6[68-1]='0';
  memcpy(entity_7, entity_8, 11*sizeof(char));
}