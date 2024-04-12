void fun()
{
  char entity_3[34] = "";
  char* entity_9;
  memset(entity_3, 'v', 34-1);
  entity_3[34-1]='0';
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}