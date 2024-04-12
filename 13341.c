void fun()
{
  int entity_4 = 72;
  entity_4 = 72;
  char entity_6[entity_4] = "";
  char entity_5[86] = "";
  char* entity_2;
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'f', entity_4-1);
  entity_6[entity_4-1]='0';
  memset(entity_5, 'g', 86-1);
  entity_5[86-1]='0';
  strcpy(entity_2, entity_6);
}