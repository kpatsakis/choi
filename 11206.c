void fun()
{
  char* entity_6;
  char entity_9[10] = "";
  entity_6 = (char*)malloc(92*sizeof(char));
  entity_6[0]='0';
  memset(entity_9, 'T', 10-1);
  entity_9[10-1]='0';
  strcpy(entity_6, entity_9);
}