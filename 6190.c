void fun()
{
  int entity_6 = 32;
  char* entity_7;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  memset(entity_3, 'Q', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 77;
  strcpy(entity_7, entity_3);
}