void fun()
{
  int entity_0 = 97;
  char entity_7[18] = "";
  char* entity_9;
  memset(entity_7, 'A', 18-1);
  entity_7[18-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}