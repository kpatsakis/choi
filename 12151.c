void fun()
{
  int entity_5 = 57;
  int entity_0 = 30;
  int entity_7 = 34;
  char* entity_1;
  char entity_9[24] = "";
  memset(entity_9, 'w', 24-1);
  entity_9[24-1]='0';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}