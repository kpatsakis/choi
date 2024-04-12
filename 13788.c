void fun()
{
  int entity_8 = 7;
  entity_8 = 7;
  char entity_7[entity_8] = "";
  char* entity_2;
  memset(entity_7, 'M', entity_8-1);
  entity_7[entity_8-1]='0';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_7);
}