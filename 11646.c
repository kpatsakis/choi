void fun()
{
  int entity_1 = 47;
  char* entity_9;
  char entity_6[60] = "";
  entity_9 = (char*)malloc(63*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'V', 60-1);
  entity_6[60-1]='0';
  strcpy(entity_9, entity_6);
}