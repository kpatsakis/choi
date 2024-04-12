void fun()
{
  int entity_8 = 6;
  char entity_6[99] = "";
  char entity_5[entity_8] = "";
  char* entity_2;
  memset(entity_5, 'r', entity_8-1);
  entity_5[entity_8-1]='0';
  memset(entity_6, 'A', 99-1);
  entity_6[99-1]='0';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}