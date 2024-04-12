void fun()
{
  char* entity_9;
  char* entity_6;
  char entity_1[98] = "";
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'I', 98-1);
  entity_1[98-1]='0';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_1);
}