void fun()
{
  int entity_6 = 12;
  char entity_3[16] = "";
  char entity_7[44] = "";
  char* entity_9;
  char* entity_5;
  memset(entity_7, 'l', 44-1);
  entity_7[44-1]='0';
  memset(entity_3, 'k', 16-1);
  entity_3[16-1]='0';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[0]='0';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 16*sizeof(char));
}