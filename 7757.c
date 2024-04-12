void fun()
{
  int entity_7 = 88;
  char entity_2[13] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_2, 'D', 13-1);
  entity_2[13-1]='';
  memcpy(entity_4, entity_2, 13*sizeof(char));
}