void fun()
{
  int entity_1 = 72;
  char entity_2[27] = "";
  char* entity_3;
  char entity_6 = 'W';
  char* entity_4;
  char entity_9[24] = "";
  memset(entity_2, 'b', 27-1);
  entity_2[27-1]='0';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'h', 24-1);
  entity_9[24-1]='0';
  memcpy(entity_4, entity_2, 27*sizeof(char));
}