void fun()
{
  int entity_8 = 9;
  char* entity_7;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(23*sizeof(char));
  entity_7[23-1]='';
  memset(entity_2, 'B', entity_8-1);
  entity_2[entity_8-1]='';
  memcpy(entity_7, entity_2, entity_8*sizeof(char));
}