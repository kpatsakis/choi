void fun()
{
  int entity_8 = 5;
  char entity_4[entity_8] = "";
  char* entity_2;
  char entity_3[57] = "";
  char entity_9 = 'a';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'V', entity_8-1);
  entity_4[entity_8-1]='0';
  memset(entity_3, 'N', 57-1);
  entity_3[57-1]='0';
  entity_8 = 27;
  memcpy(entity_2, entity_4, entity_8*sizeof(char));
}