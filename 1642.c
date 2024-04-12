void fun()
{
  int entity_7 = 67;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_4, 'u', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_2, entity_4, entity_7*sizeof(char));
}