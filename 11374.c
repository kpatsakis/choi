void fun()
{
  char* entity_7;
  char entity_6[6] = "";
  char entity_5[38] = "";
  char* entity_2;
  memset(entity_6, 'G', 6-1);
  entity_6[6-1]='0';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'B', 38-1);
  entity_5[38-1]='0';
  memcpy(entity_7, entity_5, 38*sizeof(char));
}