void fun()
{
  char* entity_2;
  char entity_9[72] = "";
  memset(entity_9, 't', 72-1);
  entity_9[72-1]='0';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_9);
}