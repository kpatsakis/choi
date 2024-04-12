void fun()
{
  int entity_2 = 91;
  char* entity_3;
  char entity_1[entity_2] = "";
  memset(entity_1, 'u', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}