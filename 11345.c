void fun()
{
  int entity_5 = 5;
  char* entity_6;
  char entity_0[52] = "";
  char* entity_7;
  entity_6 = (char*)malloc(35*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'h', 52-1);
  entity_0[52-1]='0';
  memcpy(entity_6, entity_0, 52*sizeof(char));
}