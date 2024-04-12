void fun()
{
  int entity_2 = 68;
  int entity_3 = 70;
  char* entity_7;
  char entity_4[52] = "";
  memset(entity_4, 'A', 52-1);
  entity_4[52-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  entity_3 = 36;
  memcpy(entity_7, entity_4, 52*sizeof(char));
}