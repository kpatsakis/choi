void fun()
{
  int entity_5 = 5;
  char* entity_3;
  char entity_6[entity_5] = "";
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'Q', entity_5-1);
  entity_6[entity_5-1]='0';
  strcpy(entity_3, entity_6);
}