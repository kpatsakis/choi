void fun()
{
  int entity_1 = 87;
  entity_1 = 57;
  char* entity_9;
  char entity_2 = 'D';
  char entity_0[28] = "";
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 's', 28-1);
  entity_0[28-1]='0';
  strcpy(entity_9, entity_0);
}