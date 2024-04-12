void fun()
{
  int entity_5 = 42;
  int entity_3 = 96;
  char entity_7 = 'A';
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_9 = 'O';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[76-1]='';
  memset(entity_6, 'c', entity_3-1);
  entity_6[entity_3-1]='';
  memcpy(entity_4, entity_6, entity_3*sizeof(char));
}