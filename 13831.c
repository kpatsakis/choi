void fun()
{
  int entity_3 = 85;
  entity_3 = 85;
  char* entity_7;
  char entity_2[entity_3] = "";
  char* entity_6;
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'Q', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_6, entity_2);
}