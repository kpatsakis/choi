void fun()
{
  int entity_7 = 79;
  char entity_2[entity_7] = "";
  char* entity_1;
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'o', entity_7-1);
  entity_2[entity_7-1]='0';
  entity_7 = 66;
  strcpy(entity_1, entity_2);
}