void fun()
{
  int entity_3 = 81;
  char entity_0[entity_3] = "";
  char* entity_2;
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'N', entity_3-1);
  entity_0[entity_3-1]='0';
  strcpy(entity_2, entity_0);
}