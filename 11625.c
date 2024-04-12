void fun()
{
  char* entity_9;
  char* entity_0;
  char entity_4[75] = "";
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'p', 75-1);
  entity_4[75-1]='0';
  strcpy(entity_0, entity_4);
}