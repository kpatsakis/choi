void fun()
{
  int entity_1 = 19;
  char* entity_7;
  char entity_6[11] = "";
  memset(entity_6, 'K', 11-1);
  entity_6[11-1]='0';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_6, 11*sizeof(char));
}