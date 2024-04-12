void fun()
{
  int entity_2 = 93;
  char* entity_3;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'j', entity_2-1);
  entity_5[entity_2-1]='';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[96-1]='';
  entity_2 = 17;
  strcpy(entity_3, entity_5);
}