void fun()
{
  char* entity_3;
  char entity_2[14] = "";
  char entity_6[95] = "";
  char entity_7[53] = "";
  memset(entity_6, 'i', 95-1);
  entity_6[95-1]='0';
  memset(entity_7, 'U', 53-1);
  entity_7[53-1]='0';
  memset(entity_2, 'J', 14-1);
  entity_2[14-1]='0';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_7, 53*sizeof(char));
}