void fun()
{
  char entity_4[94] = "";
  char* entity_9;
  memset(entity_4, 'a', 94-1);
  entity_4[94-1]='0';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_4);
}