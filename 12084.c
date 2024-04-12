void fun()
{
  int entity_7 = 31;
  char* entity_6;
  char entity_4[entity_7] = "";
  memset(entity_4, 'a', entity_7-1);
  entity_4[entity_7-1]='0';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}