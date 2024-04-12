void fun()
{
  int entity_8 = 15;
  char entity_6 = 'x';
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'N', entity_8-1);
  entity_4[entity_8-1]='';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memcpy(entity_5, entity_4, entity_8*sizeof(char));
}