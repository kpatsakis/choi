void fun()
{
  int entity_6 = 80;
  char entity_3[entity_6] = "";
  char* entity_0;
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'Y', entity_6-1);
  entity_3[entity_6-1]='0';
  strcpy(entity_0, entity_3);
}