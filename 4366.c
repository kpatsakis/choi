void fun()
{
  int entity_7 = 10;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_2;
  char* entity_1;
  memset(entity_3, 'U', entity_7-1);
  entity_3[entity_7-1]='';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  strcpy(entity_2, entity_3);
}