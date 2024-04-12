void fun()
{
  int entity_2 = 4;
  entity_2 = 4;
  char* entity_1;
  char entity_3[entity_2] = "";
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'a', entity_2-1);
  entity_3[entity_2-1]='0';
  strcpy(entity_1, entity_3);
}