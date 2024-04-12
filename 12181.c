void fun()
{
  int entity_3 = 23;
  char entity_4[entity_3] = "";
  char* entity_5;
  memset(entity_4, 'd', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}