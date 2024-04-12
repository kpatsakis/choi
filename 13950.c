void fun()
{
  int entity_2 = 91;
  entity_2 = 91;
  char entity_0[entity_2] = "";
  char* entity_7;
  char entity_8 = 't';
  char entity_6 = 'M';
  memset(entity_0, 's', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_0);
}