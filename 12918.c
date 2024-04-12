void fun()
{
  int entity_4 = 70;
  char entity_2 = 'S';
  char* entity_0;
  char entity_9[63] = "";
  memset(entity_9, 'Q', 63-1);
  entity_9[63-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}