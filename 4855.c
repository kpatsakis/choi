void fun()
{
  int entity_1 = 90;
  char* entity_2;
  char* entity_4;
  char entity_7 = 'E';
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  memset(entity_3, 'd', entity_1-1);
  entity_3[entity_1-1]='';
  strcpy(entity_2, entity_3);
}