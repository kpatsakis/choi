void fun()
{
  int entity_5 = 43;
  entity_5 = 43;
  char entity_3[77] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_1 = 'K';
  memset(entity_7, 'l', entity_5-1);
  entity_7[entity_5-1]='';
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[21-1]='';
  memset(entity_3, 'I', 77-1);
  entity_3[77-1]='';
  strcpy(entity_2, entity_7);
}