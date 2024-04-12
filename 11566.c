void fun()
{
  char entity_9[21] = "";
  char* entity_2;
  char* entity_4;
  memset(entity_9, 'u', 21-1);
  entity_9[21-1]='0';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_2, entity_9);
}