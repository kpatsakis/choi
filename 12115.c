void fun()
{
  int entity_8 = 67;
  char* entity_9;
  char entity_2[31] = "";
  memset(entity_2, 'u', 31-1);
  entity_2[31-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_2);
}