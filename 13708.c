void fun()
{
  int entity_2 = 90;
  char entity_5[entity_2] = "";
  char* entity_3;
  char entity_4 = 'o';
  memset(entity_5, 'B', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[0]='0';
  entity_2 = 27;
  strcpy(entity_3, entity_5);
}