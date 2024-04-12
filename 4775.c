void fun()
{
  int entity_7 = 26;
  char entity_2 = 'O';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'q', entity_7-1);
  entity_3[entity_7-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  entity_7 = 87;
  memcpy(entity_6, entity_3, entity_7*sizeof(char));
}