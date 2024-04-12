void fun()
{
  int entity_3 = 28;
  char entity_9 = 'D';
  char* entity_2;
  char* entity_6;
  char entity_4[entity_3] = "";
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'Q', entity_3-1);
  entity_4[entity_3-1]='0';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_6, entity_4);
}