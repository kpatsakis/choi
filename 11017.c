void fun()
{
  char* entity_9;
  char entity_7[28] = "";
  char entity_3[5] = "";
  memset(entity_3, 'q', 5-1);
  entity_3[5-1]='0';
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'D', 28-1);
  entity_7[28-1]='0';
  strcpy(entity_9, entity_3);
}