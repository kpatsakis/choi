void fun()
{
  int entity_3 = 55;
  char entity_9[74] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'U', 74-1);
  entity_9[74-1]='0';
  entity_3 = 73;
  strcpy(entity_8, entity_9);
}