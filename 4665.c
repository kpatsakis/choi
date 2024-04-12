void fun()
{
  int entity_0 = 3;
  char entity_2[26] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_2, 'l', 26-1);
  entity_2[26-1]='';
  memcpy(entity_5, entity_2, 26*sizeof(char));
}