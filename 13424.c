void fun()
{
  int entity_2 = 17;
  entity_2 = 21;
  char* entity_9;
  char entity_4[36] = "";
  char entity_7 = 'd';
  char* entity_0;
  memset(entity_4, 'n', 36-1);
  entity_4[36-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(86*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_9, entity_4);
}