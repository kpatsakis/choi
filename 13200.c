void fun()
{
  int entity_4 = 23;
  int entity_2 = 25;
  char entity_1[entity_4] = "";
  char* entity_3;
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'E', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_4 = 89;
  strcpy(entity_3, entity_1);
}