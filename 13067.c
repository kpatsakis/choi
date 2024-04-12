void fun()
{
  int entity_3 = 85;
  int entity_7 = 21;
  entity_3 = 85;
  char entity_9[entity_3] = "";
  char entity_5[9] = "";
  char* entity_8;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'a', entity_3-1);
  entity_9[entity_3-1]='0';
  memset(entity_5, 'g', 9-1);
  entity_5[9-1]='0';
  strcpy(entity_8, entity_9);
}