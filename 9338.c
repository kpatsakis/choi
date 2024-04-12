void fun()
{
  int entity_8 = 5;
  char* entity_1;
  char entity_3 = 'p';
  char entity_4[58] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_4, 's', 58-1);
  entity_4[58-1]='';
  memcpy(entity_1, entity_4, 58*sizeof(char));
}