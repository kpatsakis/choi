void fun()
{
  int entity_1 = 73;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'Q', entity_1-1);
  entity_2[entity_1-1]='';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  memcpy(entity_5, entity_2, entity_1*sizeof(char));
}