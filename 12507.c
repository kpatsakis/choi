void fun()
{
  int entity_7 = 30;
  char* entity_1;
  char* entity_2;
  char entity_4[24] = "";
  char* entity_6;
  char entity_5[52] = "";
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[0]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'E', 52-1);
  entity_5[52-1]='0';
  memset(entity_4, 'K', 24-1);
  entity_4[24-1]='0';
  memcpy(entity_6, entity_5, 52*sizeof(char));
}