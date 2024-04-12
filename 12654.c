void fun()
{
  int entity_9 = 18;
  char entity_0[94] = "";
  char entity_7[1] = "";
  char* entity_2;
  char entity_6 = 'p';
  memset(entity_0, 'r', 94-1);
  entity_0[94-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'W', 1-1);
  entity_7[1-1]='0';
  strcpy(entity_2, entity_7);
}