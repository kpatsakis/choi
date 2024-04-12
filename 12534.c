void fun()
{
  int entity_4 = 34;
  char entity_6[84] = "";
  char entity_7[entity_4] = "";
  char* entity_1;
  memset(entity_7, 'C', entity_4-1);
  entity_7[entity_4-1]='0';
  memset(entity_6, 'w', 84-1);
  entity_6[84-1]='0';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, entity_4*sizeof(char));
}