void fun()
{
  int entity_6 = 45;
  int entity_4 = 57;
  char* entity_3;
  char entity_5[entity_6] = "";
  char entity_2 = 'S';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'v', entity_6-1);
  entity_5[entity_6-1]='0';
  strcpy(entity_3, entity_5);
}