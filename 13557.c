void fun()
{
  int entity_8 = 57;
  entity_8 = 57;
  char* entity_2;
  char entity_1[entity_8] = "";
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'v', entity_8-1);
  entity_1[entity_8-1]='0';
  strcpy(entity_2, entity_1);
}