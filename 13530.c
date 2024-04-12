void fun()
{
  int entity_2 = 61;
  int entity_4 = 57;
  entity_2 = 61;
  char entity_7 = 'I';
  char entity_6[entity_2] = "";
  char* entity_5;
  memset(entity_6, 'E', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_6);
}