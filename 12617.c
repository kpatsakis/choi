void fun()
{
  int entity_8 = 52;
  char entity_2[entity_8] = "";
  char* entity_7;
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'Q', entity_8-1);
  entity_2[entity_8-1]='0';
  strcpy(entity_7, entity_2);
}