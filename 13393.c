void fun()
{
  int entity_3 = 14;
  entity_3 = 43;
  char entity_1 = 'C';
  char entity_9[36] = "";
  char* entity_5;
  char entity_4 = 's';
  memset(entity_9, 'N', 36-1);
  entity_9[36-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_9);
}