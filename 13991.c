void fun()
{
  int entity_4 = 61;
  entity_4 = 61;
  char entity_7[entity_4] = "";
  char* entity_2;
  memset(entity_7, 'p', entity_4-1);
  entity_7[entity_4-1]='0';
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_7);
}