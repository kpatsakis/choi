void fun()
{
  int entity_8 = 48;
  int entity_2 = 66;
  char entity_0[entity_8] = "";
  char* entity_3;
  memset(entity_0, 'M', entity_8-1);
  entity_0[entity_8-1]='0';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_0);
}