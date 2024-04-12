void fun()
{
  int entity_7 = 44;
  char* entity_4;
  char entity_5[entity_7] = "";
  memset(entity_5, 'i', entity_7-1);
  entity_5[entity_7-1]='0';
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}