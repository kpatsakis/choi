void fun()
{
  int entity_9 = 65;
  char entity_2[33] = "";
  char* entity_7;
  memset(entity_2, 'u', 33-1);
  entity_2[33-1]='0';
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}