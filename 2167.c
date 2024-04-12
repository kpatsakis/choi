void fun()
{
  int entity_6 = 22;
  char* entity_1;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'w', 13-1);
  entity_2[13-1]='';
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  memset(entity_3, 'k', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 24;
  entity_3[63] = 'E';
}