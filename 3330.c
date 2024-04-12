void fun()
{
  int entity_8 = 72;
  entity_8 = 60;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'h', entity_8-1);
  entity_6[entity_8-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  memcpy(entity_2, entity_6, entity_8*sizeof(char));
}