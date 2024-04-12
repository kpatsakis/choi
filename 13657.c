void fun()
{
  int entity_3 = 98;
  char* entity_1;
  char entity_8[25] = "";
  char entity_5[entity_3] = "";
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'Q', entity_3-1);
  entity_5[entity_3-1]='0';
  memset(entity_8, 'e', 25-1);
  entity_8[25-1]='0';
  entity_3 = 59;
  strcpy(entity_1, entity_5);
}