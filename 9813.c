void fun()
{
  int entity_2 = 57;
  char entity_4[58] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 't', 58-1);
  entity_4[58-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memcpy(entity_6, entity_4, 58*sizeof(char));
}