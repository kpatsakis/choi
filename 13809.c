void fun()
{
  int entity_7 = 5;
  char entity_6[entity_7] = "";
  char entity_2 = 'a';
  char* entity_3;
  char entity_1 = 'I';
  memset(entity_6, 'C', entity_7-1);
  entity_6[entity_7-1]='0';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  entity_7 = 28;
  memcpy(entity_3, entity_6, entity_7*sizeof(char));
}