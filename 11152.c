void fun()
{
  char entity_3 = 'r';
  char* entity_6;
  char entity_9[18] = "";
  char* entity_7;
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'H', 18-1);
  entity_9[18-1]='0';
  strcpy(entity_7, entity_9);
}