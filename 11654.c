void fun()
{
  char* entity_9;
  char entity_1[5] = "";
  char* entity_2;
  char entity_5 = 'a';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'K', 5-1);
  entity_1[5-1]='0';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_2, entity_1);
}