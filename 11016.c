void fun()
{
  char* entity_7;
  char entity_9[31] = "";
  memset(entity_9, 'o', 31-1);
  entity_9[31-1]='0';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}