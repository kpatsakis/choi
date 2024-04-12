void fun()
{
  int entity_5 = 100;
  char* entity_3;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'p', entity_5-1);
  entity_2[entity_5-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  memcpy(entity_3, entity_2, entity_5*sizeof(char));
}