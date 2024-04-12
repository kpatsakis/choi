void fun()
{
  int entity_1 = 83;
  char* entity_6;
  char* entity_7;
  char entity_5[24] = "";
  char entity_9[79] = "";
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'B', 79-1);
  entity_9[79-1]='0';
  entity_7 = (char*)malloc(97*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'X', 24-1);
  entity_5[24-1]='0';
  strcpy(entity_6, entity_5);
}