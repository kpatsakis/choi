void fun()
{
  char entity_9 = 'P';
  char* entity_7;
  char entity_2[72] = "";
  char entity_1[31] = "";
  memset(entity_1, 'e', 31-1);
  entity_1[31-1]='0';
  memset(entity_2, 'W', 72-1);
  entity_2[72-1]='0';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}