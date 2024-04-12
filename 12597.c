void fun()
{
  int entity_9 = 99;
  int entity_3 = 57;
  char* entity_0;
  char entity_6[22] = "";
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'I', 22-1);
  entity_6[22-1]='0';
  strcpy(entity_0, entity_6);
}