void fun()
{
  int entity_2 = 54;
  char* entity_4;
  char entity_6[26] = "";
  entity_6 = NULL;
  memset(entity_6, 'O', 26-1);
  entity_6[26-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_6, 26*sizeof(char));
}