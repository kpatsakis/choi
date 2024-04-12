void fun()
{
  int entity_4 = 39;
  int entity_2 = 27;
  char* entity_1;
  char entity_5[27] = "";
  entity_5 = NULL;
  memset(entity_5, 'N', 27-1);
  entity_5[27-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  memcpy(entity_1, entity_5, 27*sizeof(char));
}