void fun()
{
  int entity_7 = 96;
  int entity_1 = 65;
  char entity_3[26] = "";
  char* entity_2;
  char entity_4[entity_7] = "";
  entity_2 = (char*)malloc(71*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'K', 26-1);
  entity_3[26-1]='0';
  memset(entity_4, 'q', entity_7-1);
  entity_4[entity_7-1]='0';
  memcpy(entity_2, entity_4, entity_7*sizeof(char));
}