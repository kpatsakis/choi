void fun()
{
  int entity_5 = 20;
  char* entity_4;
  char entity_2[entity_5] = "";
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'w', entity_5-1);
  entity_2[entity_5-1]='0';
  strcpy(entity_4, entity_2);
}