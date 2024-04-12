void fun()
{
  int entity_9 = 55;
  char* entity_0;
  char entity_5[31] = "";
  char entity_7 = 'y';
  char* entity_6;
  memset(entity_5, 's', 31-1);
  entity_5[31-1]='0';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}