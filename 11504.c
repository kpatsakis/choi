void fun()
{
  char* entity_7;
  char entity_9[69] = "";
  entity_7 = (char*)malloc(75*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'I', 69-1);
  entity_9[69-1]='0';
  strcpy(entity_7, entity_9);
}