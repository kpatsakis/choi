void fun()
{
  int entity_9 = 67;
  int entity_0 = 35;
  char entity_4[24] = "";
  char* entity_2;
  memset(entity_4, 'c', 24-1);
  entity_4[24-1]='0';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_4);
}