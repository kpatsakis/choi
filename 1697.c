void fun()
{
  int entity_2 = 84;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_4, 'k', entity_2-1);
  entity_4[entity_2-1]='';
  memcpy(entity_8, entity_4, entity_2*sizeof(char));
}