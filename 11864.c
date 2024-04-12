void fun()
{
  char entity_9[82] = "";
  char* entity_0;
  entity_0 = (char*)malloc(40*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'X', 82-1);
  entity_9[82-1]='0';
  strcpy(entity_0, entity_9);
}