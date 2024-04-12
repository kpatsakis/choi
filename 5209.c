void fun()
{
  int entity_5 = 71;
  char* entity_6;
  char entity_0 = 'J';
  char entity_9 = 'b';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'e', entity_5-1);
  entity_2[entity_5-1]='';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[63-1]='';
  strcpy(entity_4, entity_2);
}