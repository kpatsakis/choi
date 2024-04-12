void fun()
{
  int entity_4 = 87;
  int entity_7 = 73;
  char entity_6[93] = "";
  char* entity_2;
  char entity_1[entity_4] = "";
  memset(entity_1, 'o', entity_4-1);
  entity_1[entity_4-1]='0';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'A', 93-1);
  entity_6[93-1]='0';
  memcpy(entity_2, entity_1, entity_4*sizeof(char));
}