void fun()
{
  int entity_1 = 39;
  char* entity_3;
  char* entity_5;
  char entity_9[46] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 46-1);
  entity_9[46-1]='';
  entity_5 = (char*)malloc(34*sizeof(char));
  entity_5[34-1]='';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  memcpy(entity_5, entity_9, 46*sizeof(char));
}