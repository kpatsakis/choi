void fun()
{
  int entity_6 = 43;
  int entity_3 = 93;
  char* entity_5;
  char entity_0 = 'I';
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_2, 'O', entity_6-1);
  entity_2[entity_6-1]='';
  memcpy(entity_5, entity_2, entity_6*sizeof(char));
}