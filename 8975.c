void fun()
{
  int entity_1 = 65;
  entity_1 = 43;
  char* entity_2;
  char entity_4[7] = "";
  entity_4 = NULL;
  char entity_7[53] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_7, 'D', 53-1);
  entity_7[53-1]='';
  memset(entity_4, 'h', 7-1);
  entity_4[7-1]='';
  strcpy(entity_2, entity_4);
}