void fun()
{
  int entity_0 = 4;
  char entity_2[entity_0] = "";
  char* entity_3;
  memset(entity_2, 'Y', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_2);
}