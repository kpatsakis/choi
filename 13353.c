void fun()
{
  int entity_2 = 63;
  int entity_9 = 35;
  char entity_5[16] = "";
  char* entity_4;
  char entity_3[40] = "";
  memset(entity_5, 'T', 16-1);
  entity_5[16-1]='0';
  memset(entity_3, 'w', 40-1);
  entity_3[40-1]='0';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  entity_9 = 23;
  memcpy(entity_4, entity_5, 16*sizeof(char));
}