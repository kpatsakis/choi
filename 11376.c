void fun()
{
  char* entity_3;
  char entity_9[30] = "";
  memset(entity_9, 'T', 30-1);
  entity_9[30-1]='0';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}