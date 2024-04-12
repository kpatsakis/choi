void fun()
{
  int entity_3 = 77;
  char* entity_7;
  char entity_4[entity_3] = "";
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'T', entity_3-1);
  entity_4[entity_3-1]='0';
  strcpy(entity_7, entity_4);
}