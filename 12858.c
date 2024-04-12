void fun()
{
  int entity_8 = 51;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'Q', entity_8-1);
  entity_7[entity_8-1]='0';
  strcpy(entity_3, entity_7);
}