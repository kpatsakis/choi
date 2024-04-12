void fun()
{
  int entity_7 = 12;
  char entity_1[6] = "";
  char entity_5[75] = "";
  char* entity_6;
  char* entity_9;
  memset(entity_1, 'd', 6-1);
  entity_1[6-1]='0';
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'r', 75-1);
  entity_5[75-1]='0';
  strcpy(entity_6, entity_1);
}