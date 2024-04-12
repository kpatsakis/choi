void fun()
{
  int entity_2 = 8;
  char* entity_5;
  char entity_7[35] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_7, 'N', 35-1);
  entity_7[35-1]='';
  memcpy(entity_5, entity_7, 35*sizeof(char));
}