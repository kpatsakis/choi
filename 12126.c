void fun()
{
  int entity_0 = 95;
  char entity_5[entity_0] = "";
  char* entity_2;
  memset(entity_5, 'v', entity_0-1);
  entity_5[entity_0-1]='0';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}