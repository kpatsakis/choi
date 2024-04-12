void fun()
{
  int entity_4 = 3;
  char* entity_2;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_3, 'i', entity_4-1);
  entity_3[entity_4-1]='';
  memcpy(entity_2, entity_3, entity_4*sizeof(char));
}