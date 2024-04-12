void fun()
{
  int entity_9 = 36;
  char* entity_2;
  char entity_7 = 'u';
  char entity_6[98] = "";
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'P', 98-1);
  entity_6[98-1]='0';
  strcpy(entity_2, entity_6);
}