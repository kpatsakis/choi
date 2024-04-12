void fun()
{
  int entity_1 = 94;
  char entity_8[13] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'j', 13-1);
  entity_8[13-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_8);
}