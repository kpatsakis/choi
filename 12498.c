void fun()
{
  int entity_9 = 19;
  char entity_6[74] = "";
  char entity_7[18] = "";
  char entity_5[74] = "";
  char* entity_1;
  memset(entity_7, 'W', 18-1);
  entity_7[18-1]='0';
  memset(entity_5, 'e', 74-1);
  entity_5[74-1]='0';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'x', 74-1);
  entity_6[74-1]='0';
  memcpy(entity_1, entity_6, 74*sizeof(char));
}