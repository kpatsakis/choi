void fun()
{
  int entity_7 = 56;
  char* entity_8;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[57-1]='';
  memset(entity_2, 'I', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_8, entity_2);
}