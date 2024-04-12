void fun()
{
  int entity_3 = 7;
  char* entity_2;
  char entity_6 = 'D';
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', entity_3-1);
  entity_5[entity_3-1]='';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  strcpy(entity_2, entity_5);
}