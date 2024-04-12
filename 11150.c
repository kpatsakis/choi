void fun()
{
  char entity_7[29] = "";
  char entity_6[35] = "";
  char* entity_4;
  char* entity_9;
  memset(entity_6, 'a', 35-1);
  entity_6[35-1]='0';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'o', 29-1);
  entity_7[29-1]='0';
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_9, entity_7);
}