void fun()
{
  int entity_5 = 84;
  entity_5 = 49;
  char entity_0[13] = "";
  char* entity_2;
  char entity_8 = 'G';
  char entity_9 = 'J';
  memset(entity_0, 'u', 13-1);
  entity_0[13-1]='0';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_0);
}