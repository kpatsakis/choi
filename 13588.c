void fun()
{
  int entity_6 = 1;
  char entity_9[52] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'H', 52-1);
  entity_9[52-1]='0';
  entity_6 = 15;
  strcpy(entity_5, entity_9);
}