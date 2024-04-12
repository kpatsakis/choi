void fun()
{
  char* entity_9;
  char* entity_2;
  char entity_3[23] = "";
  entity_9 = (char*)malloc(81*sizeof(char));
  entity_9[0]='0';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'R', 23-1);
  entity_3[23-1]='0';
  strcpy(entity_9, entity_3);
}