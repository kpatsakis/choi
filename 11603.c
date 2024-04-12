void fun()
{
  char entity_8 = 'B';
  char entity_9[60] = "";
  char* entity_5;
  char entity_6 = 'R';
  char* entity_0;
  memset(entity_9, 'k', 60-1);
  entity_9[60-1]='0';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 60*sizeof(char));
}