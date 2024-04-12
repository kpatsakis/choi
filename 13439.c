void fun()
{
  int entity_5 = 21;
  char entity_7 = 'c';
  char entity_6[entity_5] = "";
  char* entity_2;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'I', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_5 = 97;
  memcpy(entity_2, entity_6, entity_5*sizeof(char));
}