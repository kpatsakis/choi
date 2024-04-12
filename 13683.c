void fun()
{
  int entity_1 = 88;
  char* entity_2;
  char entity_7[52] = "";
  memset(entity_7, 'h', 52-1);
  entity_7[52-1]='0';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  entity_1 = 3;
  memcpy(entity_2, entity_7, 52*sizeof(char));
}