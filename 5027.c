void fun()
{
  int entity_4 = 74;
  char* entity_9;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_8[24] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 24-1);
  entity_8[24-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  memset(entity_2, 'F', entity_4-1);
  entity_2[entity_4-1]='';
  strcpy(entity_9, entity_2);
}