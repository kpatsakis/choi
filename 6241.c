void fun()
{
  int entity_7 = 95;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_2;
  char entity_5 = 'i';
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memset(entity_4, 'W', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 49;
  strcpy(entity_2, entity_4);
}