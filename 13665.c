void fun()
{
  int entity_6 = 52;
  char entity_4[entity_6] = "";
  char* entity_9;
  char* entity_8;
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'I', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[0]='0';
  entity_6 = 62;
  strcpy(entity_8, entity_4);
}