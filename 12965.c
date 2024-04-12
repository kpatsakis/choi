void fun()
{
  int entity_6 = 57;
  char entity_3 = 'X';
  char* entity_5;
  char entity_9[12] = "";
  memset(entity_9, 'u', 12-1);
  entity_9[12-1]='0';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_9);
}