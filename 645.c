void fun()
{
  int entity_5 = 87;
  char* entity_1;
  char entity_2[27] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_2, 'N', 27-1);
  entity_2[27-1]='';
  memcpy(entity_1, entity_2, 27*sizeof(char));
}