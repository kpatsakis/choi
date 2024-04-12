void fun()
{
  int entity_3 = 30;
  entity_3 = 47;
  char entity_2[27] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'T', 27-1);
  entity_2[27-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_2, 27*sizeof(char));
}