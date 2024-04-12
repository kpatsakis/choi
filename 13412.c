void fun()
{
  int entity_9 = 83;
  entity_9 = 67;
  char* entity_7;
  char entity_0[50] = "";
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'v', 50-1);
  entity_0[50-1]='0';
  strcpy(entity_7, entity_0);
}