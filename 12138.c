void fun()
{
  int entity_3 = 77;
  char* entity_2;
  char entity_9[69] = "";
  memset(entity_9, 'H', 69-1);
  entity_9[69-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_9);
}