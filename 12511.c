void fun()
{
  int entity_3 = 2;
  int entity_1 = 57;
  char* entity_2;
  char entity_6[entity_3] = "";
  memset(entity_6, 'W', entity_3-1);
  entity_6[entity_3-1]='0';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}