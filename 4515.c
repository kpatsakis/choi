void fun()
{
  int entity_2 = 90;
  char entity_5[76] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_0;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_5, 'i', 76-1);
  entity_5[76-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memcpy(entity_0, entity_5, 76*sizeof(char));
}