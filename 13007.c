void fun()
{
  int entity_4 = 60;
  int entity_9 = 73;
  int entity_6 = 16;
  char entity_7[entity_4] = "";
  char* entity_2;
  char entity_0[77] = "";
  memset(entity_7, 'o', entity_4-1);
  entity_7[entity_4-1]='0';
  memset(entity_0, 'v', 77-1);
  entity_0[77-1]='0';
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[0]='0';
  entity_4 = 26;
  strcpy(entity_2, entity_7);
}