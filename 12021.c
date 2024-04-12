void fun()
{
  int entity_5 = 66;
  int entity_6 = 39;
  char entity_1[entity_6] = "";
  char entity_0 = 'S';
  char* entity_3;
  memset(entity_1, 'o', entity_6-1);
  entity_1[entity_6-1]='0';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}