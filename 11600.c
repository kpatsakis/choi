void fun()
{
  int entity_3 = 47;
  char* entity_4;
  char entity_2 = 'E';
  char entity_9[79] = "";
  char entity_5[68] = "";
  memset(entity_5, 'W', 68-1);
  entity_5[68-1]='0';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'R', 79-1);
  entity_9[79-1]='0';
  memcpy(entity_4, entity_5, 68*sizeof(char));
}